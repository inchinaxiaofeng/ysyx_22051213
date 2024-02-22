#include <fs.h>

extern size_t serial_write(const void *buf, size_t offset, size_t len);
extern size_t events_read(void *buf, size_t offset, size_t len);
extern size_t dispinfo_read(void *buf, size_t offset, size_t len);
extern size_t fb_write(const void *buf, size_t offset, size_t len);

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS, FD_DISPINFO, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/// @brief This is the information about all files in disk.
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]    = {"stdin",           0, 0, invalid_read,   invalid_write},
  [FD_STDOUT]   = {"stdout",          0, 0, invalid_read,   serial_write},
  [FD_STDERR]   = {"stderr",          0, 0, invalid_read,   serial_write},
  [FD_EVENTS]   = {"/dev/events",     0, 0, events_read,    invalid_write},
  [FD_DISPINFO] = {"/proc/dispinfo",  0, 0, dispinfo_read,  invalid_write},
  [FD_FB]       = {"/dev/fb",         0, 0, invalid_read,   fb_write},
#include "files.h"
};
/// @brief 記錄打開文件的讀取偏移量
size_t open_offset = 0;

/// @brief initialize the size of /dev/fb. 目前只有這個功能
void init_fs() {
  AM_GPU_CONFIG_T cfg = io_read(AM_GPU_CONFIG);

  // file_table[FD_FB].size = cfg.width * cfg.height * 4; // 方案1
  file_table[FD_FB].size = cfg.width * cfg.height; // 方案2
}

#ifdef STRACE
  /// @brief [STRACE]用於獲取讀取的文件的名字
  /// @param fd 
  /// @param file_name 
  void get_file_name(int fd, char *file_name) {
    assert(NULL != file_name);
    int length = LENGTH(file_table);
    assert(-1 < fd && fd < length);

    strcpy(file_name, file_table[fd].name);

    return;
  }
#endif

/// @brief 打開文件
/// @param pathname 
/// @param flags 
/// @param mode 
/// @return 讀取成功返回文件描述符，失敗返回-1
int fs_open(const char *pathname, int flags, int mode) {
  assert(NULL != pathname);

  int fd = -1;
  for (int i = 0; i < LENGTH(file_table); i++) {
    if (0 == strcmp(file_table[i].name, pathname)) {
      fd = i;
      open_offset = 0;
      #ifdef FSTRACE
        print_fs_info("Open File", file_table[i].name)
      #endif
      break;
    }
  }
  return fd;
}

size_t fs_read(int fd, void *buf, size_t len) {
  assert(NULL != buf);

  Finfo *file = &file_table[fd];

  if (NULL != file->read) {
    return file->read(buf, 0, len);
  } else {
    if ((open_offset + len) > file->size) {
      len = file->size - open_offset;
    }
    size_t offset = file->disk_offset + open_offset;
    size_t bytes = ramdisk_read(buf, offset, len);
    open_offset += bytes;
    return bytes;
  }


  //==========================================
  // assert(NULL != buf);

  // if (FD_STDIN == fd || FD_STDERR < fd) {
  //   Finfo *file = &file_table[fd];
  //   if ((open_offset + len) > file->size) {
  //     len = file->size - open_offset;
  //   }
  //   size_t offset = file->disk_offset + open_offset;
  //   size_t bytes = ramdisk_read(buf, offset, len);
  //   open_offset += bytes;
  //   return bytes;
  // } else {
  //   return -1;
  // }
}

size_t fs_write(int fd, const void *buf, size_t len) {
  assert(NULL != buf);

  Finfo *file = &file_table[fd];

  if (NULL != file->write) {
    return file->write(buf, open_offset, len);
  } else {
    if (open_offset + len > file->size) { // Check for oversize
      len = file->size - open_offset;
    }
    size_t offset = file->disk_offset + open_offset;
    size_t bytes = ramdisk_write(buf, offset, len);
    open_offset += bytes;
    return bytes;
  }
//=============================================
  // if (FD_STDOUT == fd || FD_STDERR == fd) {
  //   size_t i = 0;
  //   for(; len > 0; len--) {
  //     putch(((char *)buf)[i]);
  //     i++;
  //   }
  //   return i;
  // } else if (0 != fd) {
  //   Finfo *file = &file_table[fd];
  //   if (open_offset + len > file->size) {
  //     len = file->size - open_offset;
  //   }
  //   size_t offset = file->disk_offset + open_offset;
  //   size_t bytes = ramdisk_write(buf, offset, len);
  //   open_offset += bytes;
  //   return bytes;
  // } else {
  //   return -1;
  // }
}

size_t fs_lseek(int fd, size_t offset, int whence) {
  if (FD_STDERR < fd) {
    Finfo *file = &file_table[fd];
    size_t file_size = file->size;
    switch (whence) {
      case SEEK_SET: {
        if (offset <= file_size) {
          open_offset = offset;
          return open_offset;
        } else {
          return -1;
        }
      }
      case SEEK_CUR: {
        if (open_offset + offset <= file_size) {
          open_offset = open_offset + offset;
          return open_offset;
        } else {
          return -1;
        }
      }
      case SEEK_END: {
        if (0 >= (signed)offset) {
          open_offset = file_size + offset;
          return open_offset;
        } else {
          return -1;
        }
      }
      default: {
        panic("Not implemented");
      }
    }
  } else {
    return -1;
  }
}

int fs_close(int fd) {
  open_offset = 0;
  return 0;
}
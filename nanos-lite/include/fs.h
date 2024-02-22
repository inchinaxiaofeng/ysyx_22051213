#ifndef __FS_H__
#define __FS_H__

#include <common.h>

#ifndef SEEK_SET
enum {SEEK_SET, SEEK_CUR, SEEK_END};
#endif

// #define FSTRACE

#ifdef FSTRACE
  
  #define print_fs_info(op_name, file_name) \
    printf("\33[7;33m[%s]\33[0m\33[1;35m%s: %s\33[0m\n", \
          "FS INFO", \
          op_name, \
          file_name);

#endif

#ifdef STRACE
  void get_file_name(int fd, char *file_name);
#endif

int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);

#endif

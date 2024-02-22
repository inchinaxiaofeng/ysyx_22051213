#ifndef __DEVICE_MAP_H__
#define __DEVICE_MAP_H__

#include <cpu/difftest.h>

typedef void(*io_callback_t)(uint32_t, int, bool);
uint8_t *new_space(int size);

typedef struct {
    const char *name;
    // we treat ioaddr_t as paddr_t here
    paddr_t low; // the begin of map address
    paddr_t high; // the end of map address
    void *space; // the target space of map
    io_callback_t callback; // call back function, which could update the state of device and NPC
} IOMap;

static inline bool map_inside(
    IOMap *map,
    paddr_t addr
) {
    return (addr >= map->low && addr <= map->high);
}

static inline int find_mapid_by_addr(
    IOMap *maps,
    int size,
    paddr_t addr
) {
    int i;
    for (i = 0; i < size; i++) {
        if (map_inside(maps + i, addr)) {
            IFDEF(SKIP_REF_DEBUG, Log("Set Skip REF"));
            difftest_skip_ref();
            return i;
        }
    }
    return -1;
}

void add_pio_map(const char *name, ioaddr_t addr,
        void *space, uint32_t len, io_callback_t callback);
void add_mmio_map(const char *name, paddr_t addr,
        void *space, uint32_t len, io_callback_t callback);

word_t map_read(paddr_t addr, int len, IOMap *map);
void map_write(paddr_t addr, int len, word_t data, IOMap *map);

#endif
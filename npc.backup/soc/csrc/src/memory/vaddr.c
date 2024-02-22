#include <memory/paddr.h>
#include <svdpi.h>
#include <common.h>

//word_t vaddr_ifetch(vaddr_t addr, int len) {
//    return paddr_read(addr, len);
//}

extern "C" word_t vaddr_read(vaddr_t addr, int len) {
    return paddr_read(addr, len);
}

extern "C" void vaddr_write(vaddr_t addr, int len, word_t data) {
    paddr_write(addr, len, data);
}
#include <utils.h>
#include <device/map.h>

#define CH_OFFSET 0

static uint8_t *serial_base = NULL;

static void serial_putc(char ch) {
    MUXDEF(CONFIG_TARGET_AM, putch(ch), putc(ch, stderr));
}

static void serial_io_handler(
    uint32_t offset,
    int len,
    bool is_write
) {
    assert(1 == len);
    switch (offset) {
        /* We bind the serial port with the host stderr in NPC. */
        case CH_OFFSET:
            if (is_write) serial_putc(serial_base[0]);
			else panic("do not support read");
            break;
        default: panic("do not support offset = %d", offset);
    }
}

void init_serial() {
    Log("Init serial...");
    serial_base = new_space(8);
#ifdef CONFIG_HAS_PORT_IO
    add_pio_map("serial", CONFIG_SERIAL_PORT, 
        serial_base, 8, serial_io_handler);
#else
    add_mmio_map("serial", CONFIG_SERIAL_MMIO,
        serial_base, 8, serial_io_handler);
#endif
}

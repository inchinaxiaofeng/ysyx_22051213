#include <stdio.h>
#include <isa.h>
#include <common.h>
#include <memory/paddr.h>
#include <monitor/monitor.h>
#include <monitor/sdb.h>
#include <isa/riscv64/riscv64.h>
#include <device/device.h>
#include <getopt.h>
#include <device/mmio.h>
#include <device/device.h>

static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

void init_sdb();

static long load_img() {
    if (NULL == img_file) {
        Log("No image is given. Use the default build-in image.");
        return 4096; // built-in image size
    }

    FILE *fp = fopen(img_file, "rb");
    Assert(fp, "Can not open '%s'", img_file);

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);

    Log("The image is %s, size = %ld", img_file, size);

    fseek(fp, 0, SEEK_SET);
    int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
    assert(ret == 1);

    fclose(fp);
    return size;
}

static int parse_args(int argc, char *argv[]) {
    const struct option table[] = {
        {"batch"    , no_argument       , NULL, 'b'},
        {"log"      , required_argument , NULL, 'l'},
        {"diff"     , required_argument , NULL, 'd'},
        {"port"     , required_argument , NULL, 'p'},
        {"help"     , no_argument       , NULL, 'h'},
        {0          , 0                 , NULL,  0 },
    };
    int o;
    while (-1 != (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL))) {
        switch (o) {
            case 'b': sdb_set_batch_mode(); break;
            case 'p': assert(0); break;
            case 'l': assert(0); break;
            case 'd': diff_so_file = optarg; break;
            case  1 : img_file = optarg; return 0;
            default:
                printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
                printf("\t-b, --batch           run with batch mode\n");
                printf("\t-l, --log=FILE        output log to FILE\n");
                printf("\t-d, --diff=REF_SO     run DiffTest with reference REF_SO\n");
                printf("\t-p, --port=PORT       run DiffTest with port PORT\n");
                printf("\n");
                exit(0);
        }
    }
    return 0;
}

void init_monitor(int argc, char *argv[]) {
    /* Perform some global initialization. */
    Log("initialize monitor...");

    /* Parse arguments. */
    parse_args(argc, argv);

    /* Initialize memory. */
    init_mem();

    /* Initialize devices. */
    IFDEF(CONFIG_DEVICE, init_device());

    /* Perform ISA dependent initialization. */
    init_isa();

    /* Load the image to memory. This will overwrite the built-in image. */
    long img_size = load_img();

    /* Initialize differential testing. */
    IFDEF(CONFIG_DIFFTEST, init_difftest(diff_so_file, img_size, difftest_port, img_file));

    init_sdb();

    Log("monitor is initialized.");
}

// #include "include/common.h"
// #include "include/marco.h"
// #include "include/utils.h"
// #include "include/verilator_sim_tools.h"

// static long initMonitorImg () {
//     if (NULL == img_file) {
//         LOG("No image is given. Use the default build-in imgae.\n");
//         return 4096;
//     }

//     FILE *fp = fopen(img_file, "rb");
//     ASSERT(fp, "Can not open '%s'", img_file);

//     fseek(fp, 0, SEEK_END);
//     long size = ftell(fp);

//     LOG("The image is %s, size = %ld", img_file, size);

//     fseek(fp, 0, SEEK_END);
//     int ret = fread(convertGuestToHost(RESET_VECTOR), size, 1, fp);
//     assert(1 == ret);

//     fclose(fp);
//     return size;
// }

// static void initMonitorRand () {
//     srand(time(0));
// }

// static int parseMonitorArgs (int argc, char *argv[]) {
//     const struct option table[] = {
//         {"batch"    , no_argument       , NULL, 'b'},
//         {"log"      , required_argument , NULL, 'l'},
//         {"diff"     , required_argument , NULL, 'd'},
//         {"prot"     , required_argument , NULL, 'p'},
//         {"help"     , no_argument       , NULL, 'h'},
//         {"elf"      , required_argument , NULL, 'e'},
//         {0          , 0                 , NULL,  0 },
//     };
//     int opt;
//     while ((opt = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
//         switch (opt) {
//             case 'b' : setSDBBatchMode(); break;
//             case 'p' : sscanf(optarg, "%d", &difftest_port); break;
//             case 'l' : log_file = optarg; break;
//             case 'd' : diff_so_file = optarg; break;
//             case 'e' : elf_file = optarg; break;
//             case   1 : img_file = optarg; return 0;
//             default :
//                 printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
//                 printf("\t-b, --batch           run with batch mode\n");
//                 printf("\t-l, --log=FILE        output log to FILE\n");
//                 printf("\t-d, --diff=REF_SO     run DiffTest with reference REF_SO\n");
//                 printf("\t-p, --port=PORT       run DiffTest with port PORT\n");
//                 printf("\t-e, --elf=ELF         read symbol and string table from FILE\n");
//                 printf("\n");
//                 exit(0);
//         }
//     }
//     return 0;
// }

// static void printfWelcome() {
//     LOG("Trace: %s",
//         MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN),
//                              ANSI_FMT("OFF", ANSI_FG_REG)));

//     IFDEF(CONFIG_TRACE,
//         LOG("If trace is enabled, a log file will be generated "
//             "to record the trace. This may lead to a large log file. "
//             "If it is not necessary, you can disable it in menuconfig"));
//     LOG("Build time: %s, %s", __TIME__, __DATE__);
//     printf("Welcome to %s-NPC!\n", ANSI_FMT(str(__GUEST_ISA__),
//                                    ANSI_FG_YELLOW ANSI_BG_RED));
//     printf("For help, type \"h\"n");
// }

// void initMonitor (int argc, char *argv[]) {
//     parseMonitorArgs(argc, argv);

//     initMonitorRand();

//     initLog(log_file);
//     initMem();
//     initISA();

//     long img_size = initMonitorImg();
//     initDebugDifftest(diff_so_file, img_size, difftest_port);

//     initSDB();
//     initDebugTrace(elf_file);

//     IFDEF(CONFIG_ITRACE, initDisasm(
//         MUXDEF(CONFIG_ISA_x86,      "i686",
//         MUXDEF(CONFIG_ISA_mips32,   "mipsel",
//         MUXDEF(CONFIG_ISA_riscv32,  "riscv32",
//         MUXDEF(CONFIG_ISA_riscv64,  "riscv64", "bad")))) "-pc-linux-gnu"
//     ));
//     IFDEF(CONFIG_DEVICE, initDevice());

//     printfWelcome();

//     loopSDB();
// }


// #include <monitor.h>
// #include <mem.h>
// #include <difftest.h>

// //#define INSERT_NOP_INSTR

// char* image_path = NULL;
// char* diff_so_file = NULL;

// uint32_t default_img[] = {
//     // need to support both RV32 and RV64
//     // this image add some nop instruction so it will not cause structural hazard
//     0x00000297, // auipc t0,0
//     #ifdef INSERT_NOP_INSTR
//     0x00000033, // addi, zero, 0(zero)
//     0x00000033, // addi, zero, 0(zero)
//     0x00000033, // addi, zero, 0(zero)
//     0x00000033, // addi, zero, 0(zero)
//     0x00000033, // addi, zero, 0(zero)
//     #endif

//     0x0002a023, // sw zero ,0(t0)
//     #ifdef INSERT_NOP_INSTR
//     0x00000033, // addi, zero, 0(zero)
//     0x00000033, // addi, zero, 0(zero)
//     0x00000033, // addi, zero, 0(zero)
//     0x00000033, // addi, zero, 0(zero)
//     0x00000033, // addi, zero, 0(zero)
//     #endif

//     0x0002a503, // lw a0, 0(t0)
//     #ifdef INSERT_NOP_INSTR
//     0x00000033, // addi, zero, 0(zero)
//     0x00000033, // addi, zero, 0(zero)
//     0x00000033, // addi, zero, 0(zero)
//     0x00000033, // addi, zero, 0(zero)
//     0x00000033, // addi, zero, 0(zero)
//     #endif
    
//     0x00100073, // ebreak
// };

// word_t img_size = -1;

// void init_monitor(int argc, char* argv[]){
//     printf("[monitor] parse args\n");
//     parse_args(argc, argv);
//     printf("[monitor] loading images\n");
//     load_image();

//     #ifdef CONFIG_DIFFTEST
//     assert(diff_so_file != NULL);
//     assert(img_size > 0);
//     difftest_init(diff_so_file, img_size);
//     #else
//     printf("[monitor] difftest not enabled, to enable difftest, unannotate the CONFIG_DIFFTEST macro in difftest.h\n");
//     #endif

//     printf("[monitor] monitor initialized\n");

//     return;
// }

// void parse_args(int argc, char* argv[]){
//     const struct option table[] = {
//         {"batch"    , no_argument      , NULL, 'b'},
//         {"diff"     , required_argument, NULL, 'd'},
//         {"help"     , no_argument      , NULL, 'h'},
//         {"img"      , required_argument, NULL, 'i'},
//     };
//     int o;
//     while ( (o = getopt_long(argc, argv, "-bhd:i:", table, NULL)) != -1) {
//         switch (o) {
//             case 'b': sdb_set_batch_mode(); break;
//             case 'd': assert(optarg != NULL); diff_so_file = optarg; printf("diff_so_file = \"%s\"\n", diff_so_file); break;
//             case 'i': assert(optarg != NULL); image_path = optarg; printf("image_path = \"%s\"\n", image_path); break;
//             default:
//                 printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
//                 printf("\t-b,--batch              run with batch mode\n");
//                 printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
//                 printf("\t-i,--image=IMAGE_PATH   run NPC with image at IMAGE_PATH\n");
//                 printf("\n");
//                 exit(0);
//         }
//     }
//     return;
// }

// void load_image(){
//     if(image_path == NULL){
//         printf("[monitor] no image file is given, using built-in RISC-V image, support both RV32 and RV64\n");
//         assert(default_img);
//         assert(sizeof(default_img) > 0);
//         memcpy(guest_to_host(MEM_START), default_img, sizeof(default_img));
//         img_size = sizeof(default_img);
//         return;
//     }

//     assert(image_path != NULL);

//     FILE *fp = fopen(image_path, "rb");
//     assert(fp);

//     fseek(fp, 0, SEEK_END);
//     word_t image_size = ftell(fp);
//     assert(image_size > 0);

//     img_size = image_size;
//     assert(img_size == image_size);

//     printf("[monitor] image %s with size %d\n", image_path, image_size);

//     fseek(fp, 0, SEEK_SET);
//     int fread_ret = fread(guest_to_host(MEM_START), image_size, 1, fp);
//     assert(fread_ret == 1);

//     int fclose_ret = fclose(fp);
//     assert(fclose_ret == 0);

//     return;
// }
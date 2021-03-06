// @Description CBM_Wario4ExecPatch
// @HookAddress 0x3694
// @HookString 01 48 86 46 01 48 00 47 07 39 00 08 P C0 46 C0 46 C0 46 C0 46
// Mode: Thumb
// Made by beco

// IRAM
#define sGameSeq (*(volatile unsigned short*) 0x3000C3C)
#define cNextFlg (*(volatile unsigned short*) 0x3000C3E)
#define ucPerfect (*(volatile unsigned char*) 0x3000015)
#define usFadeTimer (*(volatile unsigned short*) 0x300188E)
#define sLocalSeq (*(volatile unsigned short*) 0x3002C60)
#define unk_3004A6C (*(volatile unsigned short*) 0x3004A6C)

// I/O
#define REG_DMA3SAD (*(volatile unsigned int*) 0x40000D4)
#define REG_DMA3DAD (*(volatile unsigned int*) 0x40000D8)
#define REG_DMA3CNT (*(volatile unsigned int*) 0x40000DC)

// VRAM
#define VRAM 0x6000000
#define MapTexts1 ((volatile unsigned short*) 0x6008304)
#define MapTexts2 ((volatile unsigned short*) 0x6008344)

// Subroutine
#define Sub_8005F1C_Wario4_Exec ((void (*)(int)) 0x8005F1D)

// Data
#define TEXT1_CHAR 0x87A0000
#define TEXT2_CHAR 0x87A0200

__attribute__((no_caller_saved_registers))
void CBM_Wario4ExecPatch() {
    // Vanilla code
    Sub_8005F1C_Wario4_Exec( usFadeTimer++ );

    // Custom code
    // Skip Wario's car animation when game start
    if (sLocalSeq == 0x08) {
        sLocalSeq = 0x0B;
    }
}

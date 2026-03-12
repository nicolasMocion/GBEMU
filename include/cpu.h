#pragma once

#include "common.h"
#include "instructions.h"

typedef struct {

    u8 a;
    u8 f;
    u8 b;
    u8 c;
    u8 d;
    u8 e;
    u8 h;
    u8 l;
    u16 pc;
    u16 sp;
} cpu_registers;

typedef struct{
    cpu_registers regs;
    //Current fetch
    u16 fetched_data; // Data fetched when grabbing a register
    u16 mem_dest; //Memory destination
    bool dest_is_mem;
    u8 cur_opcode; // Current instruction
    instruction *cur_inst;

    bool halted;
    bool stepping; //Stepping mode check
}cpu_context;

uint16_t cpu_read_reg(reg_type rt);
void cpu_init();
bool cpu_step();

typedef void(*IN_PROC)(cpu_context *);

IN_PROC inst_get_processor(in_type type);

#define CPU_FLAG_Z BIT(ctx->regs.f, 7)
#define CPU_FLAG_N BIT(ctx->regs.f, 6)
#define CPU_FLAG_H BIT(ctx->regs.f, 5)
#define CPU_FLAG_C BIT(ctx->regs.f, 4)



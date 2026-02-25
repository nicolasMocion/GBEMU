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

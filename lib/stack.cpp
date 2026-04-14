//
// Created by Nicolas osorio on 10/04/26.
//

#include "stack.h"
#include "cpu.h"
#include "bus.h"

void stack_push(u8 data) {

    cpu_get_regs() -> sp--;
    bus_write(cpu_get_regs() -> sp, data);

}

u8 stack_push16(u16 data) {

}

u8 stack_pop() {

}

u16 stack_pop16() {

}

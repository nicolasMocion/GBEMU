add_library(emu STATIC
        bus.c
        cart.c
        cpu.c
        cpu_util.c
        emu.c
        instructions.c
        ppu.c
        timer.c
        cpu_proc.c
        cpu.fetch.c
        ram.c

)

# Aquí le decimos que use los headers, pero que NO busque un archivo binario llamado gbemu_headers
target_link_libraries(emu PUBLIC SDL2::SDL2 SDL2_ttf::SDL2_ttf)
target_include_directories(emu PUBLIC ../include)
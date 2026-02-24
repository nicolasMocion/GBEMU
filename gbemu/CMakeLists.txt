add_executable(gbemu main.c)

# SOLO vincula emu. Como emu ya tiene los headers configurados, main.c los verá.
target_link_libraries(gbemu PRIVATE emu)
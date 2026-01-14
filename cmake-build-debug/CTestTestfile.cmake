# CMake generated Testfile for 
# Source directory: /Users/nicolas/Documents/GBEMU/GBEMU
# Build directory: /Users/nicolas/Documents/GBEMU/GBEMU/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(check_gbe "/Users/nicolas/Documents/GBEMU/GBEMU/cmake-build-debug/tests/check_gbe")
set_tests_properties(check_gbe PROPERTIES  _BACKTRACE_TRIPLES "/Users/nicolas/Documents/GBEMU/GBEMU/CMakeLists.txt;96;add_test;/Users/nicolas/Documents/GBEMU/GBEMU/CMakeLists.txt;0;")
subdirs("lib")
subdirs("gbemu")
subdirs("tests")

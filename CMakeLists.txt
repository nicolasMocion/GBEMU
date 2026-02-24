cmake_minimum_required(VERSION 3.20)
project(gbemu C)

set(CMAKE_C_STANDARD 11)

# 1. LOCALIZACIÓN DE HOMEBREW (Crítico para Mac M1)
if(APPLE)
  # Forzamos a CMake a buscar en la carpeta de Homebrew de Apple Silicon
  set(CMAKE_PREFIX_PATH "/opt/homebrew")
  include_directories(/opt/homebrew/include)
  link_directories(/opt/homebrew/lib)
endif()

# 2. BUSCAR SDL2
find_package(SDL2 REQUIRED)
find_package(SDL2_ttf REQUIRED)

# 3. HEADERS DEL PROYECTO
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# 4. CONFIG.H
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/config.h.in
        ${CMAKE_CURRENT_BINARY_DIR}/config.h)
include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_definitions(-DHAVE_CONFIG_H)

# 5. SUBDIRECTORIOS
add_subdirectory(lib)
add_subdirectory(gbemu)
cmake_minimum_required(VERSION 3.15)
project(clox C)

set(CMAKE_C_STANDARD 99)

add_executable(clox src/main.c src/common.h src/chunk.h src/chunk.c src/memory.h src/memory.c src/debug.h src/debug.c src/value.h src/value.c src/vm.c src/vm.h src/compiler.h src/compiler.c src/scanner.c src/scanner.h src/object.h src/object.c src/table.h src/table.c)
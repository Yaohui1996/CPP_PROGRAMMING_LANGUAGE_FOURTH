cmake_minimum_required(VERSION 3.21)

project(CPP_PROGRAMMING_LANGUAGE_FOURTH CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/source)

add_executable(05_03_01_task_and_thread ${SOURCE_DIR}/05_03_01_task_and_thread.cc)
add_executable(05_03_02_task_and_thread_with_params ${SOURCE_DIR}/05_03_02_task_and_thread_with_params.cc)

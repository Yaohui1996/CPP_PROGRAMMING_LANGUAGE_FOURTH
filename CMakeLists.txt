cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)
# set(CMAKE_CXX_COMPILER "/usr/local/opt/llvm/bin/clang++")
# set(CMAKE_LINKER "${CMAKE_LINKER} /usr/local/Cellar/llvm/16.0.3/bin/lld")
# set(CMAKE_AR "${CMAKE_AR} /usr/local/Cellar/llvm/16.0.3/bin/llvm-ar")
# set(CMAKE_CPP_FLAGS "${CMAKE_CPP_FLAGS} -I/usr/local/opt/llvm/include")
# set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -I/usr/local/opt/llvm/include")
# set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -I/usr/local/opt/llvm/include")
# set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -I/usr/local/opt/llvm/include")
# set(CMAKE_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS} -I/usr/local/opt/llvm/include")

project(CPP_PROGRAMMING_LANGUAGE_FOURTH CXX)


message("CMAKE_CPP_FLAGS: ${CMAKE_CPP_FLAGS}")
message("CMAKE_EXE_LINKER_FLAGS: ${CMAKE_EXE_LINKER_FLAGS}")
message("CMAKE_MODULE_LINKER_FLAGS: ${CMAKE_MODULE_LINKER_FLAGS}")
message("CMAKE_SHARED_LINKER_FLAGS: ${CMAKE_SHARED_LINKER_FLAGS}")
message("CMAKE_STATIC_LINKER_FLAGS: ${CMAKE_STATIC_LINKER_FLAGS}")

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/source)

add_executable(05_03_01_task_and_thread ${SOURCE_DIR}/05_03_01_task_and_thread.cc)
add_executable(05_03_02_task_and_thread_with_params ${SOURCE_DIR}/05_03_02_task_and_thread_with_params.cc)

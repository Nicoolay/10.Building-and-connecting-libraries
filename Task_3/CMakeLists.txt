cmake_minimum_required(VERSION 3.22.0)
project(Task_2)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(Task_2 SHARED "Task_2/Leaver.cpp" "Task_2/Leaver.h")

add_executable(Leaver_client_2exe "Leaver_client/Leaver_client.cpp")

target_include_directories(Leaver_client_2exe PRIVATE "${CMAKE_SOURCE_DIR}/Task_2")

target_link_libraries(Leaver_client_2exe Task_2)

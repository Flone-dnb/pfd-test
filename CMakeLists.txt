cmake_minimum_required(VERSION 3.12)

project(pfd-test)

# target
add_executable(${PROJECT_NAME} src/main.cpp)

# pfd
add_subdirectory(ext/portable-file-dialogs)
target_link_libraries(${PROJECT_NAME} PRIVATE portable_file_dialogs)

include_directories(ext)
include_directories(src)
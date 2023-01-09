cmake_minimum_required(VERSION 3.22.1)  #  cmake version

project(learn_cpp)

# set var
set(SOURCES
src/SampleLib.cpp
    src/main.cpp
)

add_executable(headers_project ${SOURCES})

# PRIVATE won't expose to other libraries.
target_include_directories(headers_project PRIVATE ${PROJECT_SOURCE_DIR}/include)

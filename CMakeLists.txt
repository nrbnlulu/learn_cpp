cmake_minimum_required(VERSION 3.22.1) # cmake version

project(learn_cpp)

# set var
set(SOURCES src/SampleLib.cpp src/main.cpp)

add_library(mystaticlib STATIC
            ${PROJECT_SOURCE_DIR}/include/static/mylib/somestaticlib.h)

# The meaning of scopes are:

# PRIVATE - the directory is added to this target’s include directories

# INTERFACE - the directory is added to the include directories for any targets
# that link this library.

# PUBLIC - As above, it is included in this library and also any targets that
# link this library.
target_include_directories(mystaticlib
                           PUBLIC ${PROJECT_SOURCE_DIR}/include/static)

# https://stackoverflow.com/questions/11801186
set_target_properties(mystaticlib PROPERTIES LINKER_LANGUAGE CXX)

# When creating an executable that will use your library you must tell the
# compiler about the library. This can be done using the target_link_libraries()
# function.
add_executable(${PROJECT_NAME} ${SOURCES})

# PRIVATE won't expose to other libraries.
target_include_directories(${PROJECT_NAME}
                           PRIVATE ${PROJECT_SOURCE_DIR}/include)
# This tells CMake to link the hello_library against the hello_binary executable
# during link time. It will also propagate any include directories with PUBLIC
# or INTERFACE scope from the linked library target.
target_link_libraries(${PROJECT_NAME} PRIVATE mystaticlib)

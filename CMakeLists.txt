cmake_minimum_required(VERSION 3.15)

set(DEBUG_VERSION "DebugMode")
set(RELEASE_VERSION "ReleaseMode")
set(COMPILE_MODE ${DEBUG_VERSION})
set(PROJECT_NAME "NeonDemo")

# debug mode (project name + compile time)
if(${COMPILE_MODE} MATCHES ${DEBUG_VERSION})
    set(USE_RELEASE_MODE 0)
    set(CMAKE_BUILD_TYPE "Debug")
    string(TIMESTAMP COMPILE_TIME %y%m%d_%H%M%S)
# release mode (project name + version)
else()
    set(USE_RELEASE_MODE 1)
    set(CMAKE_BUILD_TYPE "Release")
    set(VERSION_MAJOR 0)
    set(VERSION_MINOR 0)
    set(VERSION_PATCH 0)
    set(VERSION_TWEAK 4)
endif()

project(${PROJECT_NAME})

configure_file(
    "include/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

include_directories(
    include
    "${PROJECT_BINARY_DIR}"
)

aux_source_directory(src SRC_DIR)

add_executable(${PROJECT_NAME} ${SRC_DIR})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/output)

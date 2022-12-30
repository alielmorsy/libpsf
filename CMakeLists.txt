
cmake_minimum_required(VERSION 3.12)

project(libpsf VERSION 0.3 
    DESCRIPTION "Load Cadence Spectre PSF simulation data"
    LANGUAGES CXX)

option(WITH_PYTHON "Build python bindings" OFF)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    include(CTest)
endif()

add_subdirectory(src)
add_subdirectory(test)

if(WITH_PYTHON)
    add_subdirectory(bindings)
endif()
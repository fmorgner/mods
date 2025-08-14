cmake_minimum_required(VERSION "4.0.3")

project("mods"
    VERSION "1.0.0"
    LANGUAGES CXX
    DESCRIPTION "Experiments with C++ modules"
)

set(CMAKE_CXX_MODULE_STD YES)
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)

add_subdirectory("app")
add_subdirectory("lib")
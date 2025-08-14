cmake_minimum_required(VERSION "4.0.3")

set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "d0edc3af-4c50-42ea-a356-e2862fe7a444")
set(CMAKE_CXX_MODULE_STD YES)

project("mods"
    VERSION "1.0.0"
    LANGUAGES CXX
    DESCRIPTION "Experiments with C++ modules"
)

set(CMAKE_CXX_STANDARD "23")
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)

add_executable("mods"
    "src/main.cpp"
)

target_sources("mods" PRIVATE
    FILE_SET CXX_MODULES
    BASE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}"
    FILES
    "src/math.cppm"
)

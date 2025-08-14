cmake_minimum_required(VERSION "4.0.3")

project("mods"
    VERSION "1.0.0"
    LANGUAGES CXX
    DESCRIPTION "Experiments with C++ modules"
)

add_executable("mods"
    "src/main.cpp"
)

target_sources("mods" PRIVATE
    FILE_SET CXX_MODULES
    BASE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}"
    FILES
    "src/math.cppm"
)

target_compile_features("mods" PRIVATE
    "cxx_std_23"
)

set_target_properties("mods" PROPERTIES
    CXX_MODULE_STD YES
    INTERPROCEDURAL_OPTIMIZATION ON
)
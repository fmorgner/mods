include_guard(GLOBAL)

add_library("core" OBJECT)

target_sources("core" PUBLIC
    FILE_SET CXX_MODULES
    BASE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}"
    FILES
    "math.cppm"
)

target_compile_features("core" PUBLIC
    "cxx_std_23"
)
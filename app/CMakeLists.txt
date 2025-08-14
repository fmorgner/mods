include_guard(GLOBAL)

add_executable("mods"
    "main.cpp"
)

target_link_libraries("mods" PRIVATE "core")
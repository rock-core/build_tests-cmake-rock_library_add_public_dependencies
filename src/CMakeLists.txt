rock_library(rock_library_add_public_dependencies
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(rock_library_add_public_dependencies_bin Main.cpp
    DEPS rock_library_add_public_dependencies)


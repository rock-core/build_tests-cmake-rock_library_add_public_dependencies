rock_add_public_dependencies(rock_library_add_public_dependencies
    PKGCONFIG plain_package)

rock_library(rock_library_add_public_dependencies
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp
    DEPS_PKGCONFIG plain_package another_plain_package)

rock_executable(rock_library_add_public_dependencies_bin Main.cpp
    DEPS rock_library_add_public_dependencies)


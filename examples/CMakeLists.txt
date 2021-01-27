cmake_minimum_required(VERSION 3.5)

project(my_project)

# Abseil requires C++11
set(CMAKE_CXX_STANDARD 11)

# Process Abseil's CMake build system
add_subdirectory(abseil-cpp)

add_executable(hello_world hello_world.cc)

# Declare dependency on the absl::strings library
target_link_libraries(hello_world absl::algorithm
                        absl::base
                        absl::debugging
                        absl::flat_hash_map
                        absl::flags_parse
                        absl::memory
                        absl::meta
                        absl::numeric
                        absl::random_random
                        absl::strings
                        absl::synchronization
                        absl::time
                        absl::utility)
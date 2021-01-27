cmake_minimum_required(VERSION 3.5)

project(v1_example)

# Abseil requires C++11
set(CMAKE_CXX_STANDARD 11)

# Process Abseil's CMake build system
add_subdirectory(abseil-cpp)
add_subdirectory(v1)

add_executable(v1_example v1_example.cpp)


# Declare dependency on the absl::strings library
target_link_libraries(v1_example
                        absl::flags_parse
                        minituna_v1
                        )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(v1_example PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                            )
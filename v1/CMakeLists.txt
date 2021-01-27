add_library(minituna_v1 minituna.cpp)

target_link_libraries(minituna_v1
                        absl::algorithm
                        absl::base
                        absl::debugging
                        absl::hash
                        absl::flags
                        absl::memory
                        absl::meta
                        absl::numeric
                        absl::random_random
                        absl::strings
                        absl::synchronization
                        absl::time
                        absl::utility
                        absl::any
                        )

target_include_directories(minituna_v1
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )
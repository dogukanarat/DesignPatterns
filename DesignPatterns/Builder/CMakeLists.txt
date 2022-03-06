set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(
    Builder
)

target_sources(
    Builder 
    PRIVATE
        Builder.cpp
)

target_link_libraries(
    Builder
    PUBLIC
)

install(
    TARGETS Builder
    EXPORT Builder-config
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})



set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(
    AbstractFactory
)

target_sources(
    AbstractFactory 
    PRIVATE
        AbstractFactory.cpp
)

target_link_libraries(
    AbstractFactory
    PUBLIC
)

install(
    TARGETS AbstractFactory
    EXPORT AbstractFactory-config
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})



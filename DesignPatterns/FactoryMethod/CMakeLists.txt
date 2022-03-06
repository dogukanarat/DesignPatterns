set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(
    FactoryMethod
)

target_sources(
    FactoryMethod 
    PRIVATE
        FactoryMethod.cpp
)

install(
    TARGETS FactoryMethod
    EXPORT FactoryMethod-config
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})



set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(
    BuilderFacet
)

target_sources(
    BuilderFacet 
    PRIVATE
        Facets.cpp
        Person.cpp
        PersonBuilder.cpp
)

target_link_libraries(
    BuilderFacet
    PUBLIC
)

install(
    TARGETS BuilderFacet
    EXPORT BuilderFacet-config
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})



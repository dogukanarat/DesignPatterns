add_subdirectory(Library)

install(
    EXPORT Library-config
    NAMESPACE Library::
    DESTINATION ${CMAKE_INSTALL_PREFIX}/cmake
)

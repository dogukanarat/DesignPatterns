add_library(
    Library
)
target_sources(
    Library
    PRIVATE
    Builder.cpp
)

target_include_directories(
    Library 
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/>
           $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

install(
    TARGETS Library
    EXPORT Library-config
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})

install(
    DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/Library/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/Library
)
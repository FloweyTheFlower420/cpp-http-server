cmake_minimum_required(VERSION 3.9)
project(HTTPserverpp VERSION 1.0.0 DESCRIPTION "Cursed C++ http server lib")

add_library(HTTPserverpp SHARED
    src/httpserver.cpp
    src/request.cpp
)

set_target_properties(HTTPserverpp PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(HTTPserverpp PROPERTIES PUBLIC_HEADER src/httpserver.h)
target_include_directories(HTTPserverpp PRIVATE .)
include(GNUInstallDirs)

install(TARGETS HTTPserverpp 
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)



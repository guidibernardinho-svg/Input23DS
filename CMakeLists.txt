cmake_minimum_required(VERSION 3.16)
project(Input23DS)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_add_executable(Input23DS
    main.cpp
    mainwindow.cpp
    mainwindow.h
)

target_link_libraries(Input23DS PRIVATE Qt6::Widgets)

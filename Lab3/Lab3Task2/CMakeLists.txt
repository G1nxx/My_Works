cmake_minimum_required(VERSION 3.27)
project(Lab3Task2 LANGUAGES CXX)


set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

add_executable(Lab3Task2 main.cpp widget.h widget.cpp widget.ui)
target_link_libraries(Lab3Task2 PRIVATE Qt5::Widgets)

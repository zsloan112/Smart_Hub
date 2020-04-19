cmake_minimum_required(VERSION 3.9.0)

project(Smart_Hub CXX C)

enable_testing()

option( BUILD_SHARED_LIBS "Build shared libraries" ON)

find_package(Qt5 5.12.8 EXACT COMPONENTS Core Gui Multimedia MultimediaWidgets Network Svg Test Widgets REQUIRED)

add_subdirectory(smart_home_display)


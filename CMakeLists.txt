cmake_minimum_required(VERSION 2.8)

project(third)

set(third_src main.cpp CIntN.cpp operators.cpp AT.cpp)
set(third_hdr head.hpp CIntN.hpp AT.hpp)

add_executable(${PROJECT_NAME} ${third_src} ${third_hdr})


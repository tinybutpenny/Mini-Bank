cmake_minimum_required(VERSION 3.10)
project(nganhang)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(
    src/chung            
    src/nhap              
    src/xuat             
)

add_executable(nganhang
    src/main.cpp
    src/chung/chung.cpp
    src/nhap/nhap.cpp
    src/xuat/xuat.cpp
)

cmake_minimum_required(VERSION 3.20)
project(exmpl-cmake-app LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_OSX_ARCHITECTURES "x86_64;arm64")

find_package(CURL CONFIG REQUIRED)

add_executable(exmpl-app main.cpp)
target_link_libraries(exmpl-app
    PRIVATE
        CURL::libcurl
)

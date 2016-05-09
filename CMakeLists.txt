cmake_minimum_required (VERSION 2.6)
project (stats)
file(GLOB SOURCES "src/*.cpp")
add_executable(stats ${SOURCES})
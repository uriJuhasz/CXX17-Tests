cmake_minimum_required(VERSION 2.6)
project(cxxtests)

add_executable(cxxtests main.cpp)

set (CMAKE_CXX_FLAGS "-pedantic -Wall -std=c++17 ${CMAKE_CXX_FLAGS}")

set (CMAKE_CXX_FLAGS_DEBUG "-O0 -g3 ${CMAKE_CXX_FLAGS_DEBUG}")
set (CMAKE_CXX_FLAGS_RELEASE "-O3 ${CMAKE_CXX_FLAGS_RELEASE}")

install(TARGETS cxxtests RUNTIME DESTINATION bin)

#set(CMAKE_VERBOSE_MAKEFILE on)

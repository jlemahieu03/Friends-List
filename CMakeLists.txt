cmake_minimum_required(VERSION 3.15)
project(Friends-List)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp
        Friend.h
        mergeSort.h
        Friend.cpp
        Friend_List.h
        Friend_List.cpp
        mergeSort.cpp
        Person.h
        Person.cpp
        List.h
        List.cpp)

add_executable(test testing.cpp
        Friend.h
        mergeSort.h
        Friend.cpp
        Friend_List.h
        Friend_List.cpp
        mergeSort.cpp
        Person.h
        Person.cpp
        List.h
        List.cpp)

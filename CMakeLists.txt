cmake_minimum_required(VERSION 3.29)
project(AskMe)

set(CMAKE_CXX_STANDARD 20)

add_executable(AskMe main.cpp
        cmake-build-debug/User.cpp
        cmake-build-debug/User.h
        cmake-build-debug/Login.cpp
        cmake-build-debug/Login.h
        cmake-build-debug/Question.cpp
        cmake-build-debug/Question.h
)

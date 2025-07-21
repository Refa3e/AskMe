cmake_minimum_required(VERSION 3.29)
project(AskMe)

set(CMAKE_CXX_STANDARD 20)

add_executable(AskMe
    main.cpp
    User.cpp
    Login.cpp
    Question.cpp
)

cmake_minimum_required(VERSION 3.0)
project(banking_system)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE main.cpp account.cpp banking.cpp)

add_executable(${PROJECT_NAME} ${SOURCE})
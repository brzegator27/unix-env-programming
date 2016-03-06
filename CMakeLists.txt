cmake_minimum_required(VERSION 3.3)
project(unix_env_programming)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

#set(SOURCE_FILES main.c main_2.c)
#add_executable(unix_env_programming ${SOURCE_FILES})
#add_executable(unix_env_programming main.c)
add_executable(copy1 class_2/copy1.c)
add_executable(cat1 class_2/cat1.c)
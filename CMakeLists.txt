cmake_minimum_required(VERSION 3.3)
project(unix_env_programming)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

add_executable(copy1 class_2/copy1.c)
add_executable(cat1 class_2/cat1.c)
add_executable(backward class_2/backward.c)
add_executable(tail class_2/tail.c)


#################### class_4 ####################

set(MY_SHELL_SOURCE_FILES class_4/shell.c class_4/funcs.h class_4/funcs.c)
add_executable(my_shell ${MY_SHELL_SOURCE_FILES})

add_custom_command(
    TARGET my_shell POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:my_shell> ${PROJECT_SOURCE_DIR}/Debug/class_4)

add_custom_command(
    TARGET my_shell POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove $<TARGET_FILE:my_shell>)

# -------------------
add_executable(save class_4/process_limits/save.c)

add_custom_command(
        TARGET save POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:save> ${PROJECT_SOURCE_DIR}/Debug/class_4)

add_custom_command(
    TARGET save POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove $<TARGET_FILE:save>)

MESSAGE( STATUS "CMAKE_CURRENT_BINARY_DIR: " ${CMAKE_CURRENT_BINARY_DIR} )
MESSAGE( STATUS "CMAKE_CURRENT_BINARY_DIR: " ${PROJECT_SOURCE_DIR} )

#################### class_4 ####################
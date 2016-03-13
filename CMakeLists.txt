cmake_minimum_required(VERSION 3.3)
project(unix_env_programming)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -pthread")

#################### class_1 ####################

add_executable(manage_err class_1/managing_err/manage_err.c class_1/managing_err/t.c)

add_custom_command(
        TARGET manage_err POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:manage_err> ${PROJECT_SOURCE_DIR}/Debug/class_1)

add_custom_command(
        TARGET manage_err POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E remove $<TARGET_FILE:manage_err>)

# -------------------

add_executable(sys_conf class_1/sys_conf/sys_conf_generated.c)

add_custom_command(
        TARGET sys_conf POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:sys_conf> ${PROJECT_SOURCE_DIR}/Debug/class_1)

add_custom_command(
        TARGET sys_conf POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E remove $<TARGET_FILE:sys_conf>)

#################### class_1 ####################

add_executable(copy1 class_2/copy1.c)
add_executable(cat1 class_2/cat1.c)
add_executable(backward class_2/backward.c)
add_executable(tail class_2/tail.c)


#################### class_4 ####################

set(MY_SHELL_SOURCE_FILES class_4/shell/shell.c class_4/shell/funcs.h class_4/shell/funcs.c)
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

#################### class_5 ####################

add_executable(hello class_5/hello/hello.c)

add_custom_command(
        TARGET hello POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:hello> ${PROJECT_SOURCE_DIR}/Debug/class_5)

add_custom_command(
        TARGET hello POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E remove $<TARGET_FILE:hello>)

# -------------------

add_executable(synch class_5/synchronization/synch.c)

add_custom_command(
        TARGET synch POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:synch> ${PROJECT_SOURCE_DIR}/Debug/class_5)

add_custom_command(
        TARGET synch POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E remove $<TARGET_FILE:synch>)

# -------------------

add_executable(cond class_5/cond_var/cond.c)

add_custom_command(
        TARGET cond POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:cond> ${PROJECT_SOURCE_DIR}/Debug/class_5)

add_custom_command(
        TARGET cond POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E remove $<TARGET_FILE:cond>)

# -------------------

add_executable(rand_search class_5/thread_canceling/random_search.c)

add_custom_command(
        TARGET rand_search POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:rand_search> ${PROJECT_SOURCE_DIR}/Debug/class_5)

add_custom_command(
        TARGET rand_search POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E remove $<TARGET_FILE:rand_search>)

# -------------------

add_executable(sum class_5/sum/sum.c)

add_custom_command(
        TARGET sum POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:sum> ${PROJECT_SOURCE_DIR}/Debug/class_5)

add_custom_command(
        TARGET sum POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E remove $<TARGET_FILE:sum>)


#################### class_5 ####################
cmake_minimum_required(VERSION 3.27)
project(EssentialsOfCPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(EssentialsOfCPP
        C_DanGookin/main.c
        C_DanGookin/preprocessors.c
        EssentialsOfCPP/DesignPatterns/dealingWithIO.cpp
        EssentialsOfCPP/learning_header_files.cpp
        EssentialsOfCPP/loops_in_cpp.cpp
        EssentialsOfCPP/playing_with_cmd_line_arguments.cpp
        EssentialsOfCPP/pointers_all.cpp
        EssentialsOfCPP/the_very_basics.cpp
        EssentialsOfCPP/trying_out_lambdas.cpp
        EssentialsOfCPP/using_const.cpp)

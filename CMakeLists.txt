cmake_minimum_required(VERSION 3.9)
project(gsynth)

set(CMAKE_CXX_STANDARD 14)

add_executable(gsynth main.cpp std_lib_facilities.h ghelp.cpp ghelp.h git_commands.h git_commands.cpp git_cmd_descriptions.cpp git_cmd_descriptions.h)
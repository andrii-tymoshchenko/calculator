cmake_minimum_required (VERSION 2.8)

project(HW_6)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -std=c++11)


set (main_src main.cpp)
set (calculator_src calculator.cpp)
set (helper_src helper.cpp)

add_library (calculator SHARED ${calculator_src})
add_library (helper SHARED ${helper_src})

add_executable(main ${main_src})

target_link_libraries (main calculator helper)

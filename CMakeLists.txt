cmake_minimum_required (VERSION 3.5)

set (main_src
     main.cpp)

set (calculator_src
     calculator.cpp)

set (math_functions_src
     math_functions.cpp)

add_library (calculator SHARED ${calculator_src})
add_library (math_functions SHARED ${math_functions_src})

add_executable(main ${main_src})

target_link_libraries (main calculator math_functions)

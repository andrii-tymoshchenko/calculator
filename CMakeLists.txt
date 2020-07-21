cmake_minimum_required (VERSION 2.8)

set (main_src
     main.cpp)

set (calculator_src
     calculator.cpp)

set (helper_src
     helper.cpp)

if(USE_STRING_FUNC)
   add_definitions(-DUSE_STRING_FUNC)
endif()

if(SHAREDLIB)
  add_library (calculator SHARED ${calculator_src})
  add_library (helper SHARED ${helper_src})
else()
  add_library (calculator ${calculator_src})
  add_library (helper ${helper_src})
endif()

add_executable(main ${main_src})

target_link_libraries (main calculator helper)

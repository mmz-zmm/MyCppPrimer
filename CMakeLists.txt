cmake_minimum_required(VERSION 3.0.0)
project(my_cppPrimer VERSION 0.1.0)

include(CTest)
enable_testing()
set(CMAKE_COMPILER g++)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -Wextra -pedantic")

include_directories(include)
#set(SRC 7_13.cpp Sales_data.cpp)
#set(SRC 7_41.cpp 7_41_Sales_data.cpp)
set(SRC 13_39.cpp)
add_executable(main ${SRC})



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

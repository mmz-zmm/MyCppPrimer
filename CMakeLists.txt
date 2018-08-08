cmake_minimum_required(VERSION 3.0.0)
project(my_cppPrimer VERSION 0.1.0)

include(CTest)
enable_testing()
set(CMAKE_CXX_STANDARD 11)

include_directories(include)
#set(SRC 7_13.cpp Sales_data.cpp)
#set(SRC 7_41.cpp 7_41_Sales_data.cpp)
set(SRC 9_31.cpp)
add_executable(my_cppPrimer ${SRC})



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

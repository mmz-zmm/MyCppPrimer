cmake_minimum_required(VERSION 3.0.0)
project(my_cppPrimer VERSION 0.1.0)

include(CTest)
enable_testing()
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -Wextra -pedantic")

include_directories(include)
#set(SRC 7_13.cpp Sales_data.cpp)
#set(SRC 7_41.cpp 7_41_Sales_data.cpp)


set(SRC 13_44_test.cpp)
add_library(mylib 13_44_String.cpp)
add_executable(main ${SRC})
target_link_libraries(main mylib)


#====================================
# # for 13_42
# set(SRC 13_42.cpp)
# add_library(StrVec 13_39.cpp)
# target_link_libraries(main StrVec)
#====================================



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

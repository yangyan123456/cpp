cmake_minimum_required(VERSION 3.22.3)
project(cpp)

#set(BOOST_ROOT "E:/Boost1.70/include/boost-1_70")
set(BOOST_ROOT "D:/boost1.79/boost_1_79_0")

#添加头文件搜索路径
#include_directories(E:/Boost1.70/include/boost-1_70)
include_directories(D:/boost1.79/boost_1_79_0)

#/添加库文件搜索路径
#link_directories(E:/Boost1.70/lib)
link_directories(D:/boost1.79/boost_1_79_0/stage/lib)

add_executable(cpp "const/const.cpp" static/static.cpp "const/function_const.cpp" const/const_pointer.cpp test.cpp concurrency/std_mutex.cpp concurrency/std_thread.cpp concurrency/std_atomic.cpp concurrency/std_condition_variable.cpp concurrency/std_semaphore.cpp algorithm/quicksort.cpp effectiveC++/term1.cpp effectiveC++/term2.cpp effectiveC++/term3.cpp effectiveC++/term4.cpp effectiveC++/term5.cpp effectiveC++/term6.cpp effectiveC++/term7.cpp effectiveC++/term8.cpp effectiveC++/term9.cpp effectiveC++/term10.cpp effectiveC++/term11.cpp effectiveC++/term12.cpp effectiveC++/term13.cpp effectiveC++/term14.cpp effectiveC++/term15.cpp effectiveC++/term16.cpp effectiveC++/term17.cpp effectiveC++/term18.cpp effectiveC++/term19.cpp effectiveC++/term20.cpp effectiveC++/term21.cpp effectiveC++/term22.cpp effectiveC++/term23.cpp effectiveC++/term24.cpp effectiveC++/term25.cpp effectiveC++/term26.cpp effectiveC++/term27.cpp effectiveC++/term28.cpp effectiveC++/term29.cpp effectiveC++/term30.cpp effectiveC++/term31.cpp effectiveC++/term32.cpp effectiveC++/term33.cpp effectiveC++/term34.cpp effectiveC++/term35.cpp effectiveC++/term36.cpp effectiveC++/term37.cpp effectiveC++/term38.cpp effectiveC++/term39.cpp effectiveC++/term40.cpp effectiveC++/term41.cpp effectiveC++/term42.cpp effectiveC++/term43.cpp effectiveC++/term44.cpp effectiveC++/term45.cpp effectiveC++/term46.cpp effectiveC++/term47.cpp effectiveC++/term48.cpp effectiveC++/term49.cpp effectiveC++/term50.cpp effectiveC++/term51.cpp effectiveC++/term52.cpp effectiveC++/term53,54,55.cpp 智能指针/shared_ptr.cpp algorithm/heap_sort.cpp)

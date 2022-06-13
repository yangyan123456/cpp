cmake_minimum_required(VERSION 3.21)
project(cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp "const/const.cpp" static/static.cpp "const/function_const.cpp" const/const_pointer.cpp test.cpp concurrency/std_mutex.cpp concurrency/std_thread.cpp concurrency/std_atomic.cpp concurrency/std_condition_variable.cpp concurrency/std_semaphore.cpp algorithm/quicksort.cpp effectiveC++/term1.cpp effectiveC++/term2.cpp effectiveC++/term3.cpp effectiveC++/term4.cpp effectiveC++/term5.cpp effectiveC++/term6.cpp effectiveC++/term7.cpp effectiveC++/term8.cpp effectiveC++/term9.cpp effectiveC++/term10.cpp effectiveC++/term11.cpp effectiveC++/term12.cpp effectiveC++/term13.cpp effectiveC++/term14.cpp effectiveC++/term15.cpp effectiveC++/term16.cpp effectiveC++/term17.cpp effectiveC++/term18.cpp effectiveC++/term19.cpp effectiveC++/term20.cpp effectiveC++/term21.cpp effectiveC++/term22.cpp effectiveC++/term23.cpp effectiveC++/term24.cpp effectiveC++/term25.cpp effectiveC++/term26.cpp effectiveC++/term27.cpp effectiveC++/term28.cpp)

add_executable(test test.cpp)
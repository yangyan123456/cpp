cmake_minimum_required(VERSION 3.21)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp "const/const.cpp" static/static.cpp "const/function_const.cpp" const/const_pointer.cpp test.cpp concurrency/std_mutex.cpp concurrency/std_thread.cpp concurrency/std_atomic.cpp concurrency/std_condition_variable.cpp concurrency/std_semaphore.cpp)

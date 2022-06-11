//
// Created by user on 2022-05-14.
//

#include <iostream>
#include <thread>
#include <semaphore>
#include <mutex>

std::counting_semaphore<6> csem(6);

//int main() {
//    int a = 1;
//    a = -a;
//    std::cout<< a;
//}
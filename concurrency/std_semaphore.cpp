////
//// Created by user on 2022-05-14.
////
//
//#include <iostream>
//#include <thread>
//#include <semaphore>
//#include <mutex>
//
//std::counting_semaphore<6> csem(6);
//
//
//void producer() {
//    for (int i = 0; i < 100; ++i) {
//        std::cout << "producer : " << i << std::endl;
//        std::this_thread::sleep_for(std::chrono::seconds(1));
//        csem.release();
//    }
//}
//
//
//void consumer() {
//    for (int i = 0; i < 100; ++i) {
//        csem.acquire();
//        std::cout << "consumer : " << i << std::endl;
//        std::this_thread::sleep_for(std::chrono::seconds(1));
//    }
//}
//
//
//
//
//int main() {
//    std::thread p1(producer);
//    std::thread p2(producer);
//    std::thread p3(producer);
//
//
//    std::thread t1(consumer);
//    std::thread t2(consumer);
//    std::thread t3(consumer);
//    std::thread t4(consumer);
//
//    p1.detach();
//    p2.detach();
//    p3.detach();
//    t1.join();
//    t2.join();
//    t3.join();
//    t4.join();
//
//    return 0;
//}
//

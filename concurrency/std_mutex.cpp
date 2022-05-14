////
//// Created by user on 2022-05-10.
////
//
//#include <iostream>
//#include <thread>
//#include <mutex>
//
//using std::cout;
//using std::cin;
//using std::endl;
//
//int val = 100;
//
//std::mutex mtx1;
//std::mutex mtx2;
//
//// lock_guard原理
//class lock_guard{
//private:
//    std::mutex& mtx;
//public:
//    lock_guard(std::mutex& _mtx) : mtx(_mtx) {
//        mtx.lock();
//    }
//    ~lock_guard(){
//        mtx.unlock();
//    }
//};
//
//
//
//void work1(){
//
//
//    for(int i = 0; i < 1000000; ++i) {
//        std::unique_lock<std::mutex> lock1(mtx1);
//        std::unique_lock<std::mutex> lock2(mtx2);
//        ++val;
//        --val;
//        lock1.unlock();
//        lock2.unlock();
//    }
//    cout << std::this_thread::get_id() << "\tover" << endl;
//    cout << val << endl;
//
//}
//
//void work2(){
//
//
//    std::this_thread::sleep_for(std::chrono::milliseconds(1));
//    for(int i = 0; i < 1000000; ++i) {
//        std::unique_lock<std::mutex> lock1(mtx1);
//        std::unique_lock<std::mutex> lock2(mtx2);
//        ++val;
//        --val;
//        lock1.unlock();
//        lock2.unlock();
//    }
//    cout << std::this_thread::get_id() << "\tover" << endl;
//    cout << val << endl;
//
//}
//
//
//int main() {
//    cout<< std::thread().hardware_concurrency() <<endl; // 硬件最大支持线程数
//    std::thread a(work1);
//    std::thread b(work1);
//    std::thread c(work2);
//    std::thread d(work2);
//    std::thread e(work1);
//    a.detach();
//    b.detach();
//    c.detach();
//    d.detach();
//    e.detach();
////        b.join();
////        c.join();
////        d.join();
////        e.join();
//    std::this_thread::sleep_for(std::chrono::seconds(2));
//
//    cout << "val:" <<val << endl;
//
//}
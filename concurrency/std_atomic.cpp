////
//// Created by user on 2022-05-13.
////
//
//#include <atomic>
//#include <iostream>
//#include <thread>
//
//using namespace  std;
//
//
//std::atomic<int> val(100);
//
//
//
//
//void work1(){
//    for(int i = 0; i < 1000000; ++i) {
//        ++val;
//        --val;
//    }
//    cout << std::this_thread::get_id() << "\tover" << endl;
//    cout << val << endl;
//
//}
//
//void work2(){
//    std::this_thread::sleep_for(std::chrono::milliseconds(1));
//    for(int i = 0; i < 1000000; ++i) {
//        ++val;
//        --val;
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
//    std::this_thread::sleep_for(std::chrono::seconds(1));
//
//    cout << "val:" <<val << endl;
//
//}
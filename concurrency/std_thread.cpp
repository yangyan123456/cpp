////
//// Created by user on 2022-05-10.
////
//#include <thread>
//#include <iostream>
//
//using std::cout;
//using std::cin;
//using std::endl;
//using std::thread;
//
//int val = 100;
//
//
//void work(){
//    for(int i = 0; i < 1000000; ++i) {
//
//        ++val;
//        --val;
//    }
//    cout << std::this_thread::get_id() << "\tover" << endl;
//
//    cout << val << endl;
//
//}
//
//
//int main() {
//        cout<< thread().hardware_concurrency() <<endl;
//        std::thread a(work);
//        std::thread b(work);
//        std::thread c(work);
//        std::thread d(work);
//        std::thread e(work);
//        a.detach();
//        b.detach();
//        c.detach();
//        d.detach();
//        e.detach();
////        b.join();
////        c.join();
////        d.join();
////        e.join();
//
//
//    std::this_thread::sleep_for(std::chrono::seconds(2));
//
//    cout << "val:" <<val << endl;
//}
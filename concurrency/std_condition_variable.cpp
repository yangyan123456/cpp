////
//// Created by user on 2022-05-13.
////
//
//#include <iostream>
//#include <mutex>
//#include <thread>
//#include <condition_variable>
//#include <queue>
//
//using std::cin;
//using std::cout;
//using std::endl;
//
//std::mutex mtx1;
//std::condition_variable cond;
//
//std::deque<int> q;
//
//void producer(){
//    int i = 0;
//    while(true) {
//        std::unique_lock<std::mutex> lock(mtx1);
//        q.push_back(i);
//        //cond.notify_all();
//        if(i < 9999999) {
//            i++;
//        }
//        else --i;
//    }
//}
//
//void consumer() {
//    int data, cnt = 0;
//
//    std::unique_lock<std::mutex> lock(mtx1);
//    while(!q.empty() && cnt < 5) {
//        data = q.front();
//        q.pop_front();
//        std::cout << std::this_thread::get_id << "\t:\t" << data << endl;
//        std::this_thread::sleep_for(std::chrono::microseconds(10));
//        ++cnt;
//    }
//    std::cout <<  std::this_thread::get_id << "\tnone" << endl;
//
//}
//
//int main() {
//    std::thread p1(producer);
//    std::thread t2(consumer);
//    std::thread t3(consumer);
//    std::thread t4(consumer);
//    std::thread t5(consumer);
//    p1.detach();
//    t2.join();
//    t3.join();
//    t4.join();
//    t5.join();
//
//
//
//}
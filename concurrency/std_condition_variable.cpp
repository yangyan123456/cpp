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
//void producer() {
//    int i = 0;
//    while (true) {
//        std::unique_lock<std::mutex> lck(mtx1);
//        q.push_back(i);
//        cout << "producer : " << q.front() << " :::" << i<< endl;
//        cond.notify_one();
//        ++i;
//    }
//}
//
//
//void consumer() {
//    while (true) {
//        std::unique_lock<std::mutex> lck(mtx1);
////        cond.wait(lck, []() { return !q.empty(); });
//        cond.wait(lck, []() { return !q.empty();});
//        cout << "consumer : " << q.front() << endl;
//        q.pop_front();
//        cond.notify_one();
//    }
//}
//
//
//
//int main() {
//    std::thread p1(producer);
//    std::thread p2(producer);
//    std::thread p3(producer);
//    std::thread t2(consumer);
//    std::thread t3(consumer);
//    std::thread t4(consumer);
//    p1.detach();
//    p2.detach();
//    p3.detach();
//    t2.join();
//    t3.join();
//    t4.join();
//
//    return 0;
//
//}
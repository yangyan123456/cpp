/*
 *     绝不在构造和析构函数中调用virtual函数
 *
 *     在构造函数和析构函数中virtual函数不是virtual函数
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

//#include <iostream>
//using namespace std;
//
//template <typename T>
//void print(const T& t) {
//    if (std::is_same<std::decay<T>::type, int>::value) cout << t <<" is int" << endl;
//    else if(std::is_same<std::decay<T>::type, double>::value) cout << t << " is double" << endl;
//}
//
//
//int main(){
//    print(1);
//    print(3.14);
//}






























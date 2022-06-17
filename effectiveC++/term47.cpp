/*
 *  请使用traits class表现类型信息
 *
 *  建立一组重载函数，利用traits信息来实现不同类型
 *
 *  再建立一个控制函数或函数模板，调用上面的重载函数
 *
 *  模板A要调用模板B，需要在A之前先声明B
 *
 *
 */

//#include <iostream>
//#include <type_traits>
//#include <string>
//
//using namespace std;
//
////template<typename T>
////void f(T t) {
////    if(std::is_same<T, int>::value) {
////        cout << "int " << endl;
////    }
////    else if(std::is_same<T, double>::value) {
////        cout << "double " << endl;
////    }
////    else if(std::is_same<T, string>::value) {
////        cout << "string " << endl;
////    }
////    else
////        cout << "other " << endl;
////}
//
//
//template<typename T>
//void f1(T t);
//
//template<typename A, typename B>
//void f(A a, B t) {
//     f1( t);
//};
//
//template<typename T>
//void f1(T t) {
//    cout <<"other" << endl;
//}
//
//template<>
//void f1(int t) {
//    cout << "int" << endl;
//}
//
//template<>
//void f1(double t) {
//    cout << "double" << endl;
//}
//
//template<>
//void f1(string t) {
//    cout << "string" << endl;
//}
//
//
//int main(){
//
//    f(1, 1);
//    f(1, 1.0);
//    string a = "hello";
//    f(1, a);
//    f(1, 'c');
//    f(1, "a");
//
//    return 0;
//}
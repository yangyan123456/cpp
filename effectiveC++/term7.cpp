/*
 *  为多态基类声明virtual析构函数
 *  在实现多态时，当用基类操作派生类，在析构时防止只析构基类而不析构派生类的状况发生
 *
 *
 *
 *
 */


//#include <iostream>
//using namespace std;
//
//class base {
//public:
//    base() {
//        cout << "base constructor" << endl;
//        int *b = new int[5];
//    }
//    ~base() {
//        cout << "base destructor" << endl;
//        delete[] b;
//    }
//
//private:
//    int *b;
//};
//
//class derived : public base {
//public:
//    derived() {
//        cout << "derived constructor" << endl;
//        int *d = new int[8];
//    }
//    ~derived() {
//        cout << "derived destructor" << endl;
//        delete[] d;
//    }
//
//private:
//    int *d;
//};
//
//int main()
//{
//    base *pBase = new derived;
//    cout << "---" << endl;
//    delete pBase;
//
//    return 0;
//}
/*
 *
 *  别让异常逃离析构函数
 *
 *
 *  对于一些操作，如果定义了释放资源的函数，例如close()，那么在析构函数中调用它是一个好习惯。
 *
 *
 *
 *
 */

//#include <iostream>
//using namespace std;
//class DBConn {
//public:
//    DBConn() {
//        cout << "DBConn()" << endl;
//    }
//    void start() {
//        cout << "start()" << endl;
//    }
//
//    void close() {
//        cout << "close()" << endl;
//    }
//
//    ~DBConn() {
//        DBConn::close();
//        cout << "~DBConn()" << endl;
//    }
//};
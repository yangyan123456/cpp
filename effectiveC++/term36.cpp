/*
 *  绝不重新定义继承而来的non-virtual函数
 *
 *  对于非虚函数，如果在派生类中重新定义了基类中的一个方法，相对于生成了重名的局部变量
 *  当用函数指针来指向该方法时，将取决于该指针的作用域
 *
 *  Derived d;  // d是base的派生类，并且重新实现了方法f
 *  Base* pb = d;
 *  Derived* pd = d;
 *  pb->f();    // 调用Base::f()
 *  pd->f();    // 调用Derived::f()
 *
 *
 */


//#include <iostream>
//
//using namespace std;
//
//class Base{
//public:
//    void f(){
//        cout << "Base::f()" << endl;
//    }
//
//    virtual void f1() {
//        cout << "base f1" << endl;
//    }
//
//    void f2() {
//        cout << "base f2" << endl;
//    }
//
//};
//
//class Derived : public Base{
//public:
//    void f(){
//        cout << "Derived::f()" << endl;
//    }
//
//    virtual void f1() {
//        cout << "derived f1" << endl;
//    }
//};
//
//
//int main() {
//
//    Derived d;
//    Base *pb = &d;
//    Derived *pd = &d;
//
//    // 非虚函数，作用域不同
//    pb->f();  //  Base::f()
//    pd->f();  //  Derived::f()
//
//    // 虚函数，选择了最合适的方法
//    pb->f1(); //  Derived::f()
//    pd->f1(); //  Derived::f()
//
//    // 子类没方法，自然使用父类的方法
//    pb->f2(); //  Base::f2()
//    pd->f2(); //  Base::f2()
//
//    return 0;
//}
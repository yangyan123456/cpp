/*
 *  考虑写出一个不抛出异常的swap函数
 *
 *  swap原本只是STL的一部分，但后来成为了异常安全性编程的脊柱和用来处理自我赋值可能性的一个常见机制
 *
 *  如果想实现高效的交换，则需要考虑不交换值，而是交换内部元素的指针，此时便需要自定义swap函数
 *
 *  1.提供一个public swap成员函数，让他高效地交换类型的两个对象值
 *
 *  2.在该class或template所在的命名空间里提供一个非成员swap函数，并令他调用上述swap函数
 *
 *  3.为class特化std::swap, 并且令他调用你的swap函数
 */


#include <vector>

//class Base {
//public:
//private:
//    int a, b, c;
//    std::vector<int> v;
//};
//
//class Derived {
//public:
//    Derived(const Derived& rhs);
//    Derived& operator=(const Derived& rhs){
//        *base = *rhs.base;
//    }
//    void swap(Derived& rhs) {           // 提供接口
//        using std::swap;                // 令std::swap在此函数内可用
//        swap(base, rhs.base);    // 为对象选择合适的swap函数，此处应该是全特化的swap函数
//    }
//
//private:
//    Base* base;
//};
//
//
//namespace std {
//    template <>
//    void swap<Derived> (Derived& lhs, Derived& rhs) {
//        lhs.swap(rhs);
//    }
//}



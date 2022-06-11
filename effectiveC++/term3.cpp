/*
 *    尽可能使用const
 *
 *    1.const允许程序员指定一个语义约束， 编译器会强制实施这项约束， 该对象不可变更!
 *
 *    2.对于指针， 在 * 左边表示约束的是元素， 在 * 右边表示约束的是指针；
 *
 *    3.在类中，令函数返回一个常量值可以降低客户错误导致的意外
 *      class Rational { ... }
 *      const Rational operator* (const Rational& lhs, const Rational& rhs);
 *      如果不小心对结果修改时，会报错 :  (a * b) = c // error
 *
 *    4.const成员函数
 *      使用const成员函数可以处理const成员， 经常是为了解决 const T& 出现的问题
 *
 *      class TextBook {
 *      public:
 *          ...
 *          const char& operator[] (std::size_t idx) const {
 *              return text[idx];
 *          }
 *
 *          char& operator[] (std::size_t idx) {
 *              return text[idx];
 *          }
 *      };
 *
 *      调用时：
 *          void print(const TextBook& ctb) {
 *              cout << ctb[0] << endl;       // 调用的是常函数
 *          }
 *
 *
 *     5. 当const和non-const有着实质等价的实现时，可以令non-const调用const版本避免代码重复， 比如函数值是mutable可变的
 *
 *
 *
 * */
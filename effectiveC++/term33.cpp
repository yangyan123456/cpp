/*
 *  避免遮掩继承而来的名称
 *
 *  派生类的作用域相当于是父类作用域的一个局部作用域
 *
 *  如果想重新实现或者重载父类的方法，那么就需要使用using声明来避免父类的同名方法被覆盖
 *
 *  如果只需要父类实现方法的一部分，可以使用转发函数来继承指定版本的父类方法
 *
 *     class base {
 *     public:
 *         virtual void f1() = 0;
 *         virtual void f1(int);
 *
 *         virtual void f2(x);
 *     };
 *
 *     class derived : public base {
 *     public:
 *          virtual void f1(){  // 转发函数
 *              base::f1();     // 只调用无参数版本
 *          }
 *
 *          using base::f2;     // 声明父类的f2方法
 *          void f2();          // 重载父类的f2方法
 *     };
 *
 *
 */

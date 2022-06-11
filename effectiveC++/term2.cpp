/*
 * 尽量使用const, enum, inline来代替#define
 *
 *  #define指代的记号名可能在编译器开始处理源码之前就被预处理器移走了，因此记号名可能没有进入符号表， 很难去debug
 *  const 限定的常量可以维持一个良好的作用域，比如在类中定义的 static const 常量，在类析构之后常量的生命周期也就随之结束了
 *
 *
 *  对于一些较小的函数，不要用#define来定义，改用inline来实现，同样可以解决不产生函数调用的效果，必要时还可以配合template来使用：

 *       // 不良习惯
 *       #define CALL_WITH_MAX(a, b) f((a) > (b) ? (a) : (b))
 *
 *       // 好习惯
 *       template<typename T>
 *       inline void callWithMax(const T& a, const T& b) {
 *          f(a > b ? a : b);
 *       }
 *
 *       内联(inline)能提高函数的执行效率。
 *       将函数声明为inline，编译器不把它当做是一个函数，而是类似于把函数代码拷贝到原来的地方，这样就省下了函数调用的开销。
 *       优点是减少了函数调用的开销，代码运行速度更快。
 *       缺点是代码块占用内存更多，因为没有使用代码的“公用部分”；代码编写的难度增大
 *
 *
 */

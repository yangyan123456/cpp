/*
 *  const
 */

// 1.可以用于定义常量，
//      const定义的编译器会进行安全检查， #difine只进行字符串替换
//      const定义的类型只有类型为整数或枚举，且以常量表达式初始化时才能作为常量表达式。其他情况下只是一个const限定的变量。


const int a = 10;
constexpr int x1 = a;


#define b 1.2;
const float a2 = 1.2;
constexpr float xb1 = b;    // 字符串替换，可以赋值
constexpr float x2 = a2;    //这里a2不是整形，不是常量表达式，所以不能进行赋值


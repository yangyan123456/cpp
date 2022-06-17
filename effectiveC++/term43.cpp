/*
 *  学习处理模板化基类内的名称
 *
 *  模板的编译有两个阶段：
 *  1. 编译模板的定义
 *      只对模板中和模板参数无关的名称进行查找，也不会查找从属名称。如果父类是模板，将在第一次编译时将和泛型有关的变量被无视掉。
 *
 *  2. 模板实例化阶段
 *      编译器主要处理带模板参数的部分，所有和模板相关的操作都在该阶段完成。
 *
 *
 *
 *  直接在派生类中使用模板基类的函数，会让编译器陷入迷惑，因为直到函数被调用之前，模板基类都是未确定的
 *  需要使用以下三种方法，将成员变量和方法拖到第二阶段进行编译
 *
 *  1.使用 this-> 指出设计模板基类中的成员名称。 此时该方法成为了从属名称，将推迟到第二阶段编译。
 *  2.使用using声明模板基类中的成员名称，这是告诉编译器要查找的范围
 *  3.使用作用域运算符 :: 来指出设计模板基类中的成员名称，但这可能导致virtual函数的版本选择错误。
 */
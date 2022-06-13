/*
 *  尽量用passed by reference to const 来代替 passed by value
 *
 *  引用传递可以避免拷贝生成临时对象，作用域结束后调用析构函数导致的开销
 *
 *  const限定来避免修改引用的值
 *
 *
 *
 *
 *
 *
 */

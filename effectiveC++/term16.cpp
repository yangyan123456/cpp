/*
 *  成对使用new和delete时需要采取相同形式
 *
 *  new 对应 delete
 *  new[] 对应 delete[]
 *
 *  new的实现原理
 *      1. 分配内存
 *      2. 构造函数 // 对于复杂类型
 *      3. 返回指针
 *
 * delete的实现原理
 *      1. 获取指针
 *      2. 析构函数 // 对于复杂类型
 *      3. 释放内存
 *
 *
 *  new和delete相当于对malloc和free的封装
 *
 *  new -> operator new() -> malloc
 *  delete -> operator delete() -> free
 *
 */




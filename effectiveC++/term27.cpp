/*
 *  尽可能少做转型动作
 *
 *  四种新式转型方式：
 *
 *      const_cast<T> expression        用来将对象的常量性消除
 *
 *      dynamic_cast<T> expression      用来决定某对象是否归属于继承体系中的某个类型。
 *
 *      reinterpret_cast<T> expression  低级转型，用来将指针或引用转换为其他类型。 就像是union，由程序员来重新诠释类型。
 *
 *      static_cast<T> expression       强制转换，但无法将常量转换为非常量。
 *
 */


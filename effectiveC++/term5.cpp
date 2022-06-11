/*
 *  1.编译器会自动生成构造函数和拷贝构造、拷贝赋值函数
 *
 *  2.空类的大小为1，因为系统在实例化类时要赋予不同的地址空间，但该大小不会被子类继承
 *
 *  3.若有虚函数，那么类中就有一个成员变量：虚函数指针，这个指针指向一个虚函数表，
 *    虚函数表的第一项是类的typeinfo信息，之后的项为此类的所有虚函数的地址
 *
 *  4.虚继承是解决C++多重继承问题的一种手段，从不同途径继承来的同一基类，会在子类中存在多份拷贝。这将存在两个问题：
 *          其一，浪费存储空间；第二，存在二义性问题，
 *    通常可以将派生类对象的地址赋值给基类对象，
 *    实现的具体方式是，将基类指针指向继承类（继承类有基类的拷贝）中的基类对象的地址，但是多重继承可能存在一个基类的多份拷贝，这就出现了二义性。
 *
 *
 *
 */


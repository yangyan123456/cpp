/*
 *  编写new和delete要固守常规
 *
 *  operator new应该包含一个无穷循环，并在其中尝试分配内存，如果无法满足内存需求，就该调用new-handler。
 *
 *  operator delete应该在收到nullptr时不做任何事情，而不是抛出异常。
 *
 *
 */
/*
 *   复制对象时不要忘记其每一部分
 *
 *   当进行复制时，需要复制其base class部分。特别是对于private的成员，要调用相应的base class函数
 *
 *   不要用复制函数调用另一个复制函数
 *
 *
 *
 */
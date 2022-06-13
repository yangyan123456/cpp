/*
 *  在资源管理类中小心copying行为
 *
 *  如果一定要复制一个RAII对象，必须一并复制它的资源。
 *
 *  对于RAII class copying行为：阻止copying、引用计数
 *
 */
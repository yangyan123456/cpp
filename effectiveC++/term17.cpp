/*
 *  以独立语句将new对象置入智能指针
 *
 *  不要在复杂操作中来分配对象，应该分离出来
 *
 *
 */

/*
#include <memory>

class Widget {};
int priority(){ return 1;};
void processWidget(std::shared_ptr<Widget> pw, int priority){};

int main() {
    processWidget(std::shared_ptr<Widget>(new Widget), priority());
}
*/


//上面这段代码很不合理,因为会有三个动作：
//      1. 执行new Widget
//      2. 调用shared_ptr的构造函数
//      3. 调用priority函数

// 然而可能会是这样：
//      1. 执行new Widget
//      2. 调用priority函数
//      3. 调用shared_ptr的构造函数
// 如果在2处抛出一个异常，那么1处申请的内存就无法被释放，这样就会导致内存泄漏
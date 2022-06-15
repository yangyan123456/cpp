/*
 *  为异常安全而努力是值得的
 *
 *  当异常抛出时，程序应该不泄露任何资源，也不允许数据损坏
 *
 *  对于程序尽量以较高程度的异常安全函数来保证程序的美好实践
 *
 *  异常安全的三个等级：
 *      1.基本承诺：如果异常被抛出，程序内的任何事物仍然保持在有效状态下
 *      2.强烈保证：如果异常被抛出，程序状态不改变，调用成功就是完全成功，一旦失败，程序就会回复到“调用函数之前”的状态
 *      3.不抛掷保证nothrow：承诺绝不抛出异常
 *
 *
 *  实现强烈保证的一个策略： copy and swap
 *
 *      为你打算修改的对象创建一个副本，然后在那个副本身上做一切必要修改。修改成功完成之后将副本和原对象swap。
 *
 *      1. 如果你的类没有定义拷贝构造函数，那么你就不能使用copy and swap。
 *      struct PMImpl {
 *          std::shared_ptr<Image> bgImage;
 *          int imageChanges;
 *      };
 *
 *      2.class对象
 *      class PrettyMenu {
 *      private:
 *          Mutex mutex;
 *          std::shared_ptr<PMImpl> pImpl;
 *      public:
 *          ...
 *      };
 *
 *      3.要进行的操作
 *      void PrettyMenu::setBackgroundImage(std::istream& imgsrc) {
 *          using std::swap;
 *          Lock m1(mutex);                                     // 获取锁的副本数据
 *          std::shared_ptr<PMImpl> pNew(new PMImpl(*pImpl));   // 创建一个副本
 *          pNew->bgImage.reset(new Image(imgsrc));             // 修改副本
 *          ++pNew->imageChanges;
 *          swap(pImpl, pNew);                                  // 交换副本和原对象
 *      }
 *
 *
 */


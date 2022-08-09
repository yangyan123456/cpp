/*
 *  了解new 和 delete 的合理替换时机
 *
 *  定制版的new和delete可以更快，更省内存
 *
 */

//#include <new>
//
//void* operator new(size_t size) {
//    using namespace std;
//    size_t realSize = size + 2 * sizeof(int);
//
//    void* p = malloc(realSize);
//    if(p == nullptr) throw bad_alloc();
//
//    *(static_cast<int*>(p)) = realSize;
//    *(static_cast<int*>(p) + 1) = 0;
//
//    return static_cast<unsigned char*>(p) + 2 * sizeof(int);
//}
//

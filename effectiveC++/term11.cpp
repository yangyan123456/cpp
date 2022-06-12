/*
 *  在 operator= 中处理 ”自我赋值“
 *
 *  当*this和rhs指向同一个对象时，如果删除*this，则会导致rhs的指针指向空，因此不能自我赋值
 *
 *
 *
 *
 *
 */


//class Base {
//
//};
//
//class example {
//private:
//    Base* p;
//public:
//    example& operator= (const example& rhs) {
//        if (this != &rhs) {     // 避免自我赋值时导致的错误释放
//            delete p;
//            p = new Base(*rhs.p);
//        }
//        return *this;
//    }
//};
//
//
//class example1 {
//private:
//    Base* p;
//public:
//    example1& operator= (const example1& rhs) {
//        Base* pTemp = p;
//        p = new Base(*rhs.p);
//        delete pTemp;
//        return *this;
//    }
//};

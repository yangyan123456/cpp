//
// Created by user on 2022-05-10.
//


// TODO  在星号左边，则指向的数据是常量； 在星号右边，则指针是常量

void const_pointer() {
    int a = 1, a1 = 5;
//    1. 指向常量的指针, 不能修改值，但可以修改指向
    const int *ptr1 = &a;
//    *ptr1 = 10;
    ptr1 = &a1;

    int b = 1;
//    2. 常量指针， 不能修改指向,但可以修改值
    int *const ptr2 = &b;
//    ptr2 = &a;
    *ptr2 = 1;


//    3.指向常量的常量指针, 都不能修改
int c = 100, c1 = 103;
const int* const ptr3 = &c;
//    ptr3 = &c1;
//    *ptr3 = 102;

}


//int main(){
//    const_pointer();
//    return 0;
//}
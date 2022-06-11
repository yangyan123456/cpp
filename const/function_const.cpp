//
// Created by user on 2022-05-10.
//


// 常量指针和引用传递参数可以防止对原值的修改

#include<iostream>
using namespace std;

void func(const int * p, int *fp){
    int a =1;
//    *p = a;
    *fp = a;
}
void func2(const int& a, int& a1){
//    a = 2;
    a1 =2;
}

void function(){
    int a = 10, a1 = 13, f = 99;
    int *fp = &f;
    const int * ptr1 = &a;

    cout << ptr1 << ":\t" << *ptr1 <<endl;
    cout << fp << ":\t" << *fp <<endl;
    func(ptr1, fp);
    cout << ptr1 << ":\t" << *ptr1 <<endl;
    cout << fp << ":\t" << *fp <<endl;
    cout << a <<":\t" << a1 <<endl;
    func2(a,a1);
    cout << a <<":\t" << a1 <<endl;

    max(a,a1);

}


//int main(){
//    function();
//    return 0;
//}
//
// Created by user on 2022-06-28.
//

#include <iostream>
#include <memory>

using namespace std;


class a {
public:
    a() {
        std::cout << "a()" << std::endl;
    }
    void print () {
        std::cout << "a::print()" << std::endl;
    }

    ~a() {
        std::cout << "~a()" << std::endl;
    }
};

void f() {
    shared_ptr<a> p = make_shared<a>();
}



//int main() {
//    f();
//    return 0;
//}
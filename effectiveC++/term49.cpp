/*
 *  定制 new 和 delete
 *
 *  了解new-handler行为
 *
 *
 *
 *
 */


#include <iostream>

void outOfMemory() {
    std::cerr << "Out of memory" << std::endl;
    std::abort();
}


int main() {
    std::set_new_handler(outOfMemory);
    int *arr[9];
    for(int i = 0; i < 9; i++) {
        arr[i] = new int[50000000];
    }

    return 0;
}

#include <vector>
#include <iostream>
using namespace std;



void headify(vector<int>& nums, int l, int r){
    if(l >= r) return;
    int i = l, j = r;
    int base = nums[l];
    while(i < j){
        while(nums[j] >= base && i < j){
            j--;
        }
        while(nums[i] <= base && i < j){
            i++;
        }
        if(i < j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
    nums[l] = nums[i];
    nums[i] = base;
    headify(nums, l, i - 1);
    headify(nums, i + 1, r);
}

void head_sort(vector<int>& nums){
    headify(nums, 0, nums.size() - 1);
}

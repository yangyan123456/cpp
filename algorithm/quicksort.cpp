//
// Created by user on 2022-05-19.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include<stdio.h>
#include <time.h>



using namespace  std;

class Qsort{
public:
    Qsort() = default;
    ~Qsort() = default;
    Qsort(Qsort& qsort) = delete;
    Qsort operator=(Qsort&& qsort) = delete;

    int Partition(vector<int>& nums, int l, int r){
        int i = l, j = r + 1;
        int x = nums[l], temp = 0;
        while(i < j){
            while(nums[++i] < x && i <r);
            while(nums[--j] > x);
            if( i < j){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
        nums[l] = nums[j];
        nums[j] = x;
        return j;
    }

    int RandomPartition(vector<int>& nums, int l, int r){
        int i = rand() % (r - l +1) + l;
        int swap = nums[i];
        nums[i] = nums[l];
        nums[l] = swap;
        return Partition(nums, l, r);
    }

    void random_quick_sort(vector<int>& nums, int l, int r){
            if(l < r){
                int q = RandomPartition(nums, l , r);
                random_quick_sort(nums, l, q - 1);
                random_quick_sort(nums, q + 1, r);
            }
    }

    void quick_sort(vector<int>& nums, int l, int r){
        if(l > r) return;
        int i = l, j = r;
        int base = nums[l], temp = 0;
        while(i < j){
            while(nums[j] >= base && i < j){
                j--;
            }
            while(nums[i] <= base && i < j){
                i++;
            }
            if(i < j){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
        nums[l] = nums[i];
        nums[i] = base;
        quick_sort(nums, l, i - 1);
        quick_sort(nums, i + 1, r);
    }
};



void quickSort(vector<int>& nums, int l, int r){
    if(l > r) return;
    int i = l, j = r;
    while(i < j){
        while(nums[j] >= nums[l] && i < j){
            j--;
        }
        while(nums[i] <= nums[l] && i < j){
            i++;
        }
        swap(nums[j], nums[i]);
    }
    swap(nums[l],nums[i]);
    quickSort(nums, l, i - 1);
    quickSort(nums, i + 1, r);
}





//int main(){
//    vector<int> nums {23,45,17,11,13,89,72,26,3,17,11,13};
//    quickSort(nums, 0, nums.size() - 1);
//    for(auto i : nums){
//        cout << i << " ";
//    }
//}
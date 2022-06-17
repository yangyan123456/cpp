#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include "test.h"
#include <bitset>
#include <unordered_map>
#include <unordered_set>
#include <typeinfo>
#include <functional>
#include <random>


using namespace std;

//交换两个数
//void swap(vector<int> &arr,int i,int j) {
//    int temp = arr[i];
//    arr[i] = arr[j];
//    arr[j] = temp;
//}

////再次调整为大顶堆
//void heapify(vector<int> &arr,int index,int heapsize) {
//    int son = index * 2 + 1;
//    while(son < heapsize)
//    {
//        int sonLargest = son + 1 < heapsize && arr[son + 1] > arr[son] ? son + 1 : son; // 正好是它的子节点
//        sonLargest = arr[sonLargest] > arr[index] ? sonLargest : index;
//        if (index == sonLargest)
//            break;
//        swap(arr, index, sonLargest);
//        index = sonLargest;
//        son = index * 2 + 1;
//    }
//}
//
//
////变为大顶堆
//void heapinsert(vector<int> &arr,int index) {
//    while(arr[index] > arr[(index-1)/2]) {
//        swap(arr,index,(index-1)/2);
//        index = (index-1)/2;
//    }
//}
//
////排序
//void heapsort(vector<int> &arr)
//{
//    if (arr.size()<2) return;
//    for (int i=0;i<arr.size();i++) heapinsert(arr,i);
//
//    int heapsize = arr.size();
//    swap(arr,0,--heapsize);
//    while(heapsize>0)
//    {
//        heapify(arr,0,heapsize);
//        swap(arr,0,--heapsize);
//    }
//
//}
//

//void swap(vector<int>& arr, int i, int j) {
//    int temp = arr[i];
//    arr[i] = arr[j];
//    arr[j] = temp;
//}
//
//
//void heapCreate(vector<int>& arr, int index){
//    // 将数组变成大根堆，保证index比(index-1/2)小， 即son节点的值小于parent
//    while(arr[index] > arr[(index - 1) / 2]) {
//        swap(arr, index, (index -1) / 2);
//        index = (index - 1) / 2;
//    }
//}
//
//
//void heapAdjust(vector<int>& arr, int index, int size) {
//    int son = index * 2 + 1;
//    while(son < size) {
//        int sonMax = (son + 1 < size) && arr[son + 1] > arr[son] ? son + 1 : son;
//        if(arr[sonMax] <= arr[index]) break;
//        swap(arr, index, sonMax);
//        index = sonMax;
//        son = index * 2 + 1;
//    }
//}
//
//void heapSort(vector<int>& arr) {
//    // 1. 变成大根堆
//    for (int i = 0; i < arr.size(); ++i) {
//        heapCreate(arr, i);
//    }
//    // 2.调整大根堆
//    int n = arr.size();
//    for(int i = n - 1; i > 0; --i) {
//        swap(arr,0, i);
//        heapAdjust( arr, 0, i);
//    }
//}
//
//
//
//int main()
//{
//    vector<int> arr {49,38,65,97,76,13,27,49,10};
//
//    heapSort(arr);
//
//    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
//    return 0;
//}


// TODO 线段树
//void buildTree(vector<int>& arr, vector<int>& tree, int s, int e, int index){
//    if(s == e){
//        tree[index] = arr[s];
//        return;
//    }
//    int mid = (s + e) / 2;
//    buildTree(arr, tree, s, mid, 2 * index);
//    buildTree(arr, tree, mid + 1, e, 2 * index + 1);
//    tree[index] = tree[2 * index] + tree[2 * index + 1];
//}
//
//int query(vector<int>& tree, int s, int e, int l, int r, int index){
//    if(l > e || r < s)
//        return 0;
//    if(s >= l && e <= r)    // 在区间内，不需要再细分
//        return tree[index];
//    int mid = (s + e) / 2;
//    return query(tree, s, mid, l, r, 2 * index + 1) + query(tree, mid + 1, e, l, r, 2 * index + 2);
//}
//
//void update(vector<int>& tree, int s, int e, int index, int val){
//    // 递归来实现所有包含该更新点的路径都变化相应值
//    if(s == e){
//        tree[index] = val;
//        return;
//    }
//    int mid = (s + e) / 2;
//    update(tree, s, mid, 2 * index + 1, val);
//    update(tree, mid + 1, e, 2 * index + 2, val);
//    tree[index] = tree[2 * index + 1] + tree[2 * index + 2];
//}


// 每日一遍堆排序
void maxHeapify(vector<int>& arr, int idx, int n) {
    int left = 2 * idx + 1, right = 2 * idx + 2;    // 两个子节点
    int largest = idx;

    if(left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    if(largest != idx) {   // 发生了交换，说明idx的值比子节点要小，进行交换，并接着判断是否需要往下移动
        swap(arr[largest], arr[idx]);
        maxHeapify(arr, largest, n);
    }
}

void buildMaxHeap(vector<int>& arr, int n) { // n是arr的size
    for(int i = n / 2; i >= 0; --i) {   // 从最后一个根节点开始转化
        maxHeapify(arr, i, n);
    }
}

// 找到第K大的元素
int findKthLargest(vector<int>& nums, int k) {
    int n = nums.size();
    buildMaxHeap(nums, n);
    for(int i = nums.size() - 1; i >= nums.size() - k + 1; --i) {
        swap(nums[0], nums[i]);
        n--;
        maxHeapify(nums, 0, n);
    }
    return nums[0];
}

//int main() {
//    vector<int> nums{3,2,1,5,6,4};
//    int a = findKthLargest(nums, 2);
//    cout << a << endl;
//    return 0;
//}


//class Solution {
//private:
//    int m, n;
//public:
//    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
//        // 贪心遍历
//        m = grid[0].size(), n = grid.size();
//        int cnt = 0, pos = 0, ans = INT_MAX;
//        for(int i = 0; i < m - 1; ++i) {
//            cnt = 0;
//            pos = i;
//            for(int j = 1; j < n; ++j) {
//                int idx = min_element(moveCost[pos].begin(), moveCost[pos].end()) - moveCost[pos].begin();
//                cnt += moveCost[pos][idx];
//                pos = grid[pos+1][idx];
//            }
//            ans = min(ans, cnt);
//        }
//        return ans;
//    }
//};
//


//class A
//{
//public:
//    mutable double var;
//    void setVar(double a)
//    {
//        var = a;
//    }
//
//    operator int()//将类A对象隐式转化为int类型
//    {
//        return var;
//    }
//};
//
//int main() {
//    string a;
//    cout << a.length() << endl;
//}




#include <vector>
#include <new>
#include <string>
#include <iostream>



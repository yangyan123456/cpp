//
// Created by user on 2022-05-10.
//
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    bool cul(vector<int>& bloomDay, int m, int k, int mid){
//        int n = bloomDay.size();
//        int nums = 0, cnt = 0;
//        for(int i = 0; i < n && cnt < m; ++i) {
//            // 遇到了未开放的花
//            if(bloomDay[i] <= mid){
//                ++nums;
//                if(nums == k) {
//                    ++cnt;
//                    nums = 0;
//                }
//            }
//            else nums = 0;
//        }
//        return cnt >= m;
//    }
//
//    int minDays(vector<int>& bloomDay, int m, int k) {
//        int n = bloomDay.size();
//        if( m * k > n) return -1;
//        // 二分搜索逼近minDays
//        int l = 1, r = *max_element(bloomDay.begin(), bloomDay.end()) ;
//        while(l < r) {
//            // mid为天数
//            int mid = l + ((r - l) >> 1);
//            if(cul(bloomDay, m, k, mid)) r = mid;
//            else l = mid + 1;
//        }
//        return l;
//    }
//};
//
//int main() {
//
//    vector<string> strs{"cba","daf","ghi"};
//    Solution * su = new Solution;
//    vector<int> v{1,10,3,10,2};
//    int ans =  su->minDays(v , 3 , 1);
//    cout << ans;
//
//}
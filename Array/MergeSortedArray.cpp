#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//! Leetcode 88. Merge Sorted Array
//! https://leetcode.com/problems/merge-sorted-array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int right = m + n - 1;
        while(j >= 0){
            if(i >= 0 && nums1[i] > nums2[j]) {
                nums1[right] = nums1[i];
                i--;
            } else {
                nums1[right] = nums2[j];
                j--;
            }
            right--;
        }       
    }
};

int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3;
    int n = 3;
    Solution obj;
    obj.merge(nums1, m, nums2, n);
    for(auto x : nums1) cout << x << " ";
    return 0;
}
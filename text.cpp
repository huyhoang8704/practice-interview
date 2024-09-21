#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//! LeetCode 189. Rotate Array
//! https://leetcode.com/problems/rotate-array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;

        reverse(nums.begin(), nums.end());   // 5 4 3 2 1
        reverse(nums.begin(), nums.begin() + k); // 3 4 5 2 1
        reverse(nums.begin() + k, nums.end()); // 3 4 5 1 2
    }
};

/**
 * Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
 */

int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    Solution obj;
    obj.rotate(nums , k);
    return 0;
}
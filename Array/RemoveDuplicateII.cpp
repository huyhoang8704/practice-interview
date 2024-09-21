#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//! LeetCode 80. Remove Duplicates from Sorted Array II
//! https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 2;

        if (nums.size() <= 2) return nums.size();
        
        // use two pointers, one for current element and another for the previous two element
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;       
    }
};



int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<int> nums = {1,1,1,2,2,3};
    int val = 3;
    Solution obj;
    cout << obj.removeDuplicates(nums);
    return 0;
}
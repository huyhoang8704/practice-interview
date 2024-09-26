#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//! LeetCode 1. Two Sum
//! https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        // Build the hash table , fisrt = value , second = index
        for(int i=0; i<nums.size(); i++) mp[nums[i]] = i;
        
        // Check if the complement exists in the hash table and it have to different the current index
        for(int i = 0 ; i<nums.size(); i++) {
            int res = target - nums[i];
            if(mp.count(res) && mp[res] != i) {
                return {i,mp[res]};
            }
        }
        return {-1,-1};
    }
};


int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    Solution obj;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = obj.twoSum(nums,target);
    return 0;
}
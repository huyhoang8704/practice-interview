#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//! LeetCode 167. Two Sum II - Input array is sorted
//! https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int total = numbers[left] + numbers[right];

            if (total == target) {
                return {left + 1, right + 1};
            } else if (total > target) {
                right--;
            } else {
                left++;
            }
        }
        return {-1, -1}; // If no solution is found        
    }
};



int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    Solution obj;
    vector<int> nums = {0,0,3,4};
    int target = 0;
    vector<int> ans = obj.twoSum(nums,target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
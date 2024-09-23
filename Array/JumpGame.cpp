#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//! LeetCode 55. Jump Game
//! https://leetcode.com/problems/jump-game

// Approach : Move Goal Position
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal = nums.size() - 1;

        for (int i = nums.size() - 2; i >= 0; i--) {
            if (i + nums[i] >= goal) {
                goal = i;
            }
        }

        return goal == 0; // Nếu index đi được tới = 0 thì true       
    }
};

int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<int> nums = {3,2,1,0,4};
    int k = 3;
    Solution obj;
    cout << obj.canJump(nums);
    return 0;
}
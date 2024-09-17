#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//! Leetcode 26. Remove Duplicates from Sorted Array
//! https://leetcode.com/problems/remove-duplicates-from-sorted-array


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        for(int i=1; i< nums.size();i++){
            if(nums[i] != nums[i-1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return nums.size();
    }
};


int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    return 0;
}
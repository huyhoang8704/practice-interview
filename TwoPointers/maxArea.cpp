#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


//! LeetCode 11. Container With Most Water
//! https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0 , r = height.size()-1;
        int res = 0;
        while (l <= r) {
            int h = min(height[l] , height[r]);
            res = max(res , h * (r - l));
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return res;
    }
};


int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

   Solution obj;
   vector<int> height = {1,1};
   cout << obj.maxArea(height); 
    return 0;
}
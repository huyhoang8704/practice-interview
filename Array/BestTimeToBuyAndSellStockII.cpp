#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//! LeetCode 122. Best Time to Buy and Sell Stock II
//! https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total = 0;
        int start = prices[0];
        for(int i= 1 ; i< prices.size() ; i++) {
            if(prices[i] >  start) {
                total += prices[i] - start;
            }
            start = prices[i];
        }
        return total;
    }
};


int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<int> nums = {7,1,5,3,6,4};
    int k = 3;
    Solution obj;
    cout << obj.maxProfit(nums);
    return 0;
}
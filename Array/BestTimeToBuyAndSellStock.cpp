#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


//! Leetcode 121. Best Time to Buy and Sell Stock
//! https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = -1e9;

        for(int x : prices) {
            min_price = min(min_price, x);
            max_profit = max(max_profit, x - min_price);
        }
        return max_profit;

    }
};

class SolutionBetter {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (buyPrice > prices[i]) {
                buyPrice = prices[i];
            }

            profit = max(profit, prices[i] - buyPrice);
        }

        return profit;        
    }
};

int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<int> nums = {7,1,5,3,6,4};
    int val = 3;
    Solution obj;
    cout << obj.maxProfit(nums);
    return 0;
}
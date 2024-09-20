#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(auto x : nums) mp[x]++;
        for(auto x : mp) {
            if(x.second > nums.size()/2) return x.first;
        }
    }
};

int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<int> nums = {2,2,1,1,1,2,2};
    int val = 3;
    Solution obj;
    cout << obj.majorityElement(nums);
    return 0;
}
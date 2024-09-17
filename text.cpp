#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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

    vector<int> nums = {1,1,2};
    int val = 3;
    Solution obj;
    cout << obj.removeDuplicates(nums);
    return 0;
}
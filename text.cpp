#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
            }
        }
        return nums.size();
    }
};
// Chậm hơn

// Nhanh hơn do kh sài hàm ease
class SolutionExample {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for( int i=0; i<nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[count] = nums[i];
                count ++;
            }
        }
        return count;
    }
};


int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<int> nums = {3,2,2,3};
    int val = 3;
    Solution obj;
    cout << obj.removeElement(nums , val);
    return 0;
}
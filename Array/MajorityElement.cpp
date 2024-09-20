#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//! leetcode 169. Majority Element
//! https://leetcode.com/problems/majority-element

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

// O(1)
class SolutionBetter {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        
        for (int num : nums) {
            if (count == 0) {
                candidate = num; // Khi lặp qua từng phần tử set candidate = num
            }
            // Do phần từ xuất hiện nhiều nên count > 0 nên thg đó là candidate
            if (num == candidate) {
                count++; // Nếu gặp nó thì ++ lên
            } else {
                count--; // Không phải thì -- đi
            }
        }
        
        return candidate;
    }
};
//! Explanation : https://leetcode.com/problems/majority-element/solutions/3676530/3-method-s-beats-100-c-java-python-beginner-friendly/?envType=study-plan-v2&envId=top-interview-150



int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<int> nums = {2,2,1,1,1,2,2};
    Solution obj;
    cout << obj.majorityElement(nums);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        if(s.empty()) return true;
        while (start <= end) {
            if(!isalnum(s[start])) {
                start++;
                continue;
            }
            else if (!isalnum(s[end])) {
                end--;
                continue;
            }
            if(tolower(s[start]) != tolower(s[end])) return false;
            else {
                start++;
                end--;
            }
        }
        return true;

    }
};
int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // vector<int> nums = {3,2,1,0,4};
    // int k = 3;
    // Solution obj;
    // cout << obj.canJump(nums);
    string s = "A man, a plan, a canal: Panama";
    Solution obj;
    cout << obj.isPalindrome(s);
    return 0;
}
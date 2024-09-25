#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//! LeetCode 125. Valid Palindrome
//! https://leetcode.com/problems/valid-palindrome

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

    
    string s = "A man, a plan, a canal: Panama";
    Solution obj;
    cout << obj.isPalindrome(s);
    return 0;
}
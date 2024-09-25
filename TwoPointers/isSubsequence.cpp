#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


//! LeetCode 392. Is Subsequence
//! https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0 , j= 0;
        while( i < s.size() && j < t.size()) {
            if(s[i] == t[j]) {
                i++;
                j++;
            }
            else {
                j++;
            }
        }

        if (i == s.size()) return true;
        return false;
    }
};



int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    string s = "axc";
    string t = "ahbgdc";
    Solution obj;
    bool ans = obj.isSubsequence(s,t);
    cout << ans;
    return 0;
}
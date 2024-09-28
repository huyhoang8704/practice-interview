#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp;
        for(char x : magazine) mp[x]++;
        for(char x : ransomNote) {
            if(mp[x] == 0) return false;
            mp[x]--;
        }
        return true;
    }
};

int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    Solution obj;
    string ransomNote = "aa";
    string magazine = "aab";
    cout << obj.canConstruct(ransomNote, magazine);
    return 0;
}
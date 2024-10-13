#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        
        if(words.size()!=pattern.size()) return false;

        map<char,int> mp1;
        map<string,int> mp2;
        for(auto x : pattern) mp1[x]++;
        for(auto x : words) mp2[x]++;

        for(int i=0 ; i< pattern.size() ; i++) {
            char x = pattern[i];
            string y = words[i];
            if(mp1[x] != mp2[y]) return false;
            
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
    string pattern = "abba";
    string s = "dog cat cat dog";
    cout << obj.wordPattern(pattern,s);
    return 0;
}
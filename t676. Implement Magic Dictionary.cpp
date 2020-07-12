#include <bits/stdc++.h>
using namespace std;

class MagicDictionary {
private:
    unordered_map<int,vector<string>> dp;

public:
    /** Initialize your data structure here. */
    MagicDictionary() {
        
    }
    
    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict) {
        for(auto str:dict){
            dp[str.size()].push_back(str);
        }
    }
    
    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(string word) {
        for(auto st:dp[word.size()]){
            int i=0,cut=0;
            for(;i<word.size();i++){
                if(st[i]==word[i]){
                    continue;
                }
                if(st[i]!=word[i]&&cut==1){
                    break;
                }
            }
            if(i==word.size()&&cut==1){
                return true;
            }
            cut++;
        }
        return false;
    }
};
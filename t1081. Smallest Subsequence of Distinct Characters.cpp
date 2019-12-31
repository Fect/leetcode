#include <bits/stdc++.h>
using namespace std;

string smallestSubsequence(string text) {
        string res = "";
        vector<int> cnt(26);
        vector<int> used(26);
        for(auto ch : text){
            cnt[ch-'a'] ++;
        }

        for(auto ch : text){
            cnt[ch-'a'] --;
            if(used[ch-'a']) continue;
            while( !res.empty() && ch < res.back() && cnt[res.back()-'a']){
                used[res.back()-'a'] = 0;
                res.pop_back();
            }
            res.push_back(ch);
            used[ch-'a'] = 1;
        }
        return res;
    }

int main(){
    string res = smallestSubsequence("cdadabcc");
}
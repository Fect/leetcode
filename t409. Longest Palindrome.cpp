#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(string s) {

    unordered_set<char> set;
    int res = 0;
    for(int i=0;i<s.size();i++){
        if(set.find(s[i])!=set.end()){
            set.erase(s[i]);
            res+=2;
        }else{
            set.insert(s[i]);
        }
    }
    return res+(set.size()>0?1:0);

}
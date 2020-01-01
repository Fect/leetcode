#include <bits/stdc++.h>
using namespace std;

int maxFreq(string s, int maxLetters, int minSize, int maxSize) {

    unordered_map<string,int> m;
    int res = 0;
    for(int i=0;i+minSize<=s.size();i++){
        string str = s.substr(i,minSize);
        unordered_set<char> se(str.begin(),str.end());
        if(m.count(str)>0||se.size()<=maxLetters){
            m[str]++;
            res = max(res,m[str]);
        }
    }        
    return res;
}
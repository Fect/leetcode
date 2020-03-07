#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
    unordered_map<char,int> map;
    for(auto c:s){
        map[c]++;
    }
    vector<string> d(s.size()+1);
    for(auto key:map){
        d[key.second].push_back(key.first);
    }
    string res;
    for(int i=d.size()-1;i>=0;i--){
        for(auto co:d[i]){
            res+=string(i,co);
        }
    }
    return res;
}
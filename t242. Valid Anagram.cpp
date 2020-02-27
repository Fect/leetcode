#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    unordered_map<char,int> map1;
    unordered_map<char,int> map2;

    if(s.size()!=t.size()){
        return false;
    }
    for(int i=0;i<s.size();i++){
        map1[s[i]]++;
        map2[t[i]]++;
    }        
    
    return map1==map2;
}
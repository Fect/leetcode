#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
    unordered_map<char,char> smap;
    unordered_map<char,char> tmap;

    if(s.size()!=t.size()){
        return false;
    }

    for(int i=0;i<s.size();i++){
        char sc = s[i];
        char tc = t[i];
        if(smap.count(sc)&&smap[sc]!=tc){
            return false;
        }
        if(tmap.count(tc)&&tmap[tc]!=sc){
            return false;
        }
        smap[sc] = tc;
        tmap[tc] = sc;
    }
    return true;
}
#include <bits/stdc++.h>
using namespace std;

char findTheDifference(string s, string t) {
    int res = 0;
    
    for(int i=0;i<t.size();i++){
        res+=t[i];
        if(i<s.size()){
            res-=s[i]
        }
    }

    return (char)res;
}
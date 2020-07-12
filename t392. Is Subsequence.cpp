#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    int ns = s.size();
    int nt = t.size();

    int start = 0;
    for(int i=0;i<nt;i++){
        if(s[start]==t[i]){
            start++;
        }
    }
    if(start==ns){
        return true;
    }
    return false;

}
#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {

    int t1 = 0;
    int t2 = 0;

    while(t1<s.size()&&t2<t.size()){
        if(s[t1]==t[t2]){
            t1++;
        }
        t2++;
    }

    if(t1>=s.size()){
        return true;
    }
    return false;
}
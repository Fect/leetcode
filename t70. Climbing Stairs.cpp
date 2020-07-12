#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    int t1=1;
    int t2=1;
    for(int i=3;i<=n;i++){
        int s = t1+t2;
        t1 = t2;
        t2 = s;;
    }        
    return t2;
}
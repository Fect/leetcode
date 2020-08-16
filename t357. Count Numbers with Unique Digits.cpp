#include<bits/stdc++.h>
using namespace std;

int countNumbersWithUniqueDigits(int n) {

    if(n==0){
        return 0;
    }
    if(n==1){
        return 10;
    }

    int ans = 10,base = 9;
    for(int i=2;i<=n;i++){
        base*=(9-i+2);
        ans+=ans;
    }

    return ans;
}
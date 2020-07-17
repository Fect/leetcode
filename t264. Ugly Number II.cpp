#include <bits/stdc++.h>
using namespace std;

int nthUglyNumber(int n) {

    vector<int> res(1,1);
    int i2 = 0,i3 = 0,i5=0;
    while(res.size()<n){
        int m2 = res[i2]*2,m3 = res[i3]*3,m5 = res[i5]*5;
        int mm = min(m2,min(m3,m5));

        if(mm==m2){
            i2++;
        }
        if(mm==m3){
            i3++;
        }
        if(mm==m5){
            i5++;
        }
        res.push_back(mm);
    } 

    return res.back();

}
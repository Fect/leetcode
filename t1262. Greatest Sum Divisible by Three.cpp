#include<bits/stdc++.h>
using namespace std;

int maxSumDivThree(vector<int>& nums) {

    vector<int> d1;
    vector<int> d2;

    int su = 0;
    for(auto num:nums){
        su+=num;
        if(num%3==1){
            d1.push_back(num);
        }
        if(num%3==2){
            d2.push_back(num);
        }
    }

    sort(d1.begin(),d1.end());
    sort(d2.begin(),d2.end());

    if(su%3==0)
        return su;

    if(su%3==1){
        int r1=0,r2=0;
        if(d1.size()>0){
            r1 = su-d1[0];
        }
        if(d2.size()>1){
            r2 = su-d2[0]-d2[1];
        }
        return max(r1,r2);
    }
    if(su%3==2){
        int r1=0,r2=0;
        if(d2.size()>0){
            r2 = su-d2[0];
        }
        if(d1.size()>1){
            r1 = su-d1[0]-d1[1];
        }
        return max(r1,r2);
    }
    return su;
}
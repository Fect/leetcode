#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {

    int ma = 0;
    int neM = -1;
    for(auto num:nums){
        if(num>=ma){
            neM = ma;
            ma = num;
        }else if(num>=neM){
            neM = num;
        }
    }
    return (ma-1)*(neM-1);
}
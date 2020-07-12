#include<bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums) {

    int res = 0;
    for(auto num:nums){
        int n = to_string(num).length();
        if(n%2==0){
            res++;
        }
    }
    return res;
}
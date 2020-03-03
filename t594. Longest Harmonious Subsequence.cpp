#include <bits/stdc++.h>
using namespace std;

int findLHS(vector<int>& nums) {
    unordered_map<int,int> m;
    for(auto i:nums){
        m[i]++;
    }
    int res = 0;
    for(auto key:m){
        if(m.count(key.first+1)){
            res = max(res,key.second+m[key.first+1]);
        }
    }

    return res;
}
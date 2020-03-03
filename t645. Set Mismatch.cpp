#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    vector<int> res;
    unordered_map<int,int> map;
    for(auto it:nums){
        if(map.count(it)){
            res.push_back(it);
        }
        map[it]++;
    }

    for(int i=1;i<=nums.size();i++){
        if(map.count(i)){
            continue;
        }else{
            res.push_back(i);
        }
    }
    return res;
}
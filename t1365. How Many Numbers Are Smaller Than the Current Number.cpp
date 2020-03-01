#include <bits/stdc++.h>
using namespace std;

    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }

        int prem = 0;
        for(auto it=map.begin();it!=map.end();it++){
            int key = it->first;
            int val = it->second;
            map[key] = prem;
            prem+=val;
        }
        
        for(int i=0;i<nums.size();i++){
            res.push_back(map[nums[i]]);
        }

        return res;
    }
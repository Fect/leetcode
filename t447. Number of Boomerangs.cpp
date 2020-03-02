#include <bits/stdc++.h>
using namespace std;

int numberOfBoomerangs(vector<vector<int>>& points) {
    int res = 0;
    for(auto t1:points){
        unordered_map<double,int> map;
        map.clear();
        for(auto t2:points){
            map[hypot(t1[0]-t2[0],t1[1]-t2[1])]++;
        }
        for(auto key:map){
            if(key.second>1){
                res+=key.second*(key.second-1);
            }
        }
    }

    return res;
}
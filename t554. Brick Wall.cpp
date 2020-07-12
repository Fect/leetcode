#include <bits/stdc++.h>
using namespace std;

int leastBricks(vector<vector<int>>& wall) {
    map<int,int> ma;
    for(int i=0;i<wall.size()-1;i++){
        int sum = 0;
        for(int j=0;j<wall[i].size();j++){
            sum+=wall[i][j];
            ma[sum]++;
        }
    }   
    int res = 0;     
    for(auto ix:ma){
        res = max(res,ix.second);
    }
    return wall.size()-res;
}
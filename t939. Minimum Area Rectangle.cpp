#include <bits/stdc++.h>
using namespace std;

int minAreaRect(vector<vector<int>>& points) {
    set<pair<int,int>> se;
    for(auto ix:points){
        se.insert(make_pair(ix[0],ix[1]));
    }        
    int res = INT8_MAX;
    for(int i=0;i<points.size();i++){
        for(int j=i+1;j<points.size();j++){
            if(points[i][0]==points[j][0]||points[i][1]==points[j][1]){
                continue;
            }else{
                pair<int,int> v3 = make_pair(points[i][0],points[j][1]);
                pair<int,int> v4 = make_pair(points[j][0],points[i][1]);
                if(se.count(v3)&&se.count(v4)){
                    res = min(res,abs((points[i][0]-points[j][0])*(points[i][1]-points[j][1])));
                }
            }
        }
    }
    return res == INT8_MAX ? 0 : res;
}
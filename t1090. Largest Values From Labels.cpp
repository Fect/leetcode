#include <bits/stdc++.h>
using namespace std;

int largestValsFromLabels(vector<int>& values, vector<int>& labels, int num_wanted, int use_limit) {

    vector<pair<int,int>> dp;
    for(int i=0;i<values.size();i++){
        dp.emplace_back(make_pair(values[i],labels[i]));
    }
    sort(dp.begin(),dp.end());
    reverse(dp.begin(),dp.end());

    int res = 0,ans = 0;
    unordered_map<int,int> map;
    for(int i=0;i<dp.size()&&ans<num_wanted;i++){
        if(map[dp[i].second]<use_limit){
            res+=dp[i].first;
            map[dp[i].second]++;
            ans++;
        }
    }
    return res;
}
#include<bits/stdc++.h>
using namespace std;

int lenLongestFibSubseq(vector<int>& A) {

    int n = A.size();
    unordered_map<int,int> map;
    int res = 0;
    vector<vector<int>> dp(n,vector<int>(n,2));

    for(int i=0;i<n;i++){
        map[A[i]] = i;
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int num = A[i]+A[j];
            if(map.find(num)!=map.end()){
                dp[j][map[num]] = dp[i][j]+1;
                res = max(res,dp[j][map[num]]);
            }
           
        }
    }

    return res;
}
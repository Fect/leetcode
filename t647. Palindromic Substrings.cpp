#include <bits/stdc++.h>
using namespace std;

int countSubstrings(string s) {

    int n = s.size();
    vector<vector<int>> dp(n,vector<int>(n,0));

    int res = 0;
    for(int i=0;i<n;i++){
        dp[i][i] = 1;
        res+=1;
        for(int j=i-1;j>=0;j--){
            if(s[i]==s[j]){
                if(i-j<3){
                    dp[j][i] = 1;
                }else if(dp[j+1][i-1]){
                    dp[j][i] = 1;
                }
            }else{
                dp[j][i] = 0;
            }
            if(dp[j][i]){
                res+=1;
            }
        }
    }
    return res;
}
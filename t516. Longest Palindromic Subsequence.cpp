#include <bits/stdc++.h>
using namespace std;

int longestPalindromeSubseq(string s) {

    int n = s.size();
    int res = 1;
    vector<vector<int>> dp(n,vector<int>(n,0));
    for(int i=n-1;i>=0;i--){    
        dp[i][i] = 1;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                dp[i][j] = dp[i+1][j-1]+2;
            }else{
                dp[i][j] = max(dp[i][j-1],dp[i+1][j]);
            }
            res = max(res,dp[i][j]);
        }
    }

    return res;
}
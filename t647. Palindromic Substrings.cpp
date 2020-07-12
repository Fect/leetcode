#include <bits/stdc++.h>
using namespace std;

int countSubstrings(string s) {
    int res=0;
    int n = s.size();
    vector<vector<bool>> dp(n,vector<bool>(n,false));

    for(int i=0;i<s.size();i++){
        dp[i][i] = true;
        res+=1;
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j]){
                dp[i][j] = true;
                res+=1;
            }
        }
    }

    return res;
}
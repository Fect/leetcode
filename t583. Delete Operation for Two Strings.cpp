#include <bits/stdc++.h>
using namespace std;


int minDistance(string word1, string word2) {

    int n1 = word1.size();
    int n2 = word2.size();

    vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));

    for(int i=1;i<=word1.size();i++){
        for(int j=1;j<=word2.size();j++){
            if(word1[i-1]==word2[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    return n1+n2-2*dp[n1][n2];        
}

int main(){

}
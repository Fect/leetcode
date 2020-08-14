#include <bits/stdc++.h>
using namespace std;

double query(vector<vector<double>>& dp,int N,int i,int j,int K){

    if(i<0||i>=N||j<0||j>=N){
        return 0;
    }

    if(dp[N*i+j][K]!=-1){
        return dp[N*i+j][K];
    }
    double ans = 0;
    ans+=query(dp,N,i+1,j+2,K-1)
        +query(dp,N,i+1,j-2,K-1)
        +query(dp,N,i-1,j+2,K-1)
        +query(dp,N,i-1,j-2,K-1)
        +query(dp,N,i+2,j+1,K-1)
        +query(dp,N,i+2,j-1,K-1)
        +query(dp,N,i-2,j+1,K-1)
        +query(dp,N,i-2,j-1,K-1);
    
    ans/=8;
    dp[i*N+j][K] = ans;
    return ans;

}

double knightProbability(int N, int K, int r, int c) {

    double ans = 0;

    vector<vector<double>> dp(625,vector<double>(100));

    for(int i=0;i<N*N;i++){
        dp[i][0] = 0;
        for(int j=1;j<=K;j++){
            dp[i][j] = -1;
        }
    }

    dp[r*N+c][0] = 1;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            ans+=query(dp,N,i,j,K);
        }
    }


    return ans;
}



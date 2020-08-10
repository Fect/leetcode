#include <bits/stdc++.h>
using namespace std;

double largestSumOfAverages(vector<int>& A, int K) {
    
    int n = A.size();

    vector<double> sums(n+1,0);
    vector<vector<double>> dp(n,vector<double>(K+1,0));

    for(int i=0;i<A.size();i++){
        sums[i+1] = sums[i]+A[i];
    }
    
    for(int i=0;i<n;i++){
        dp[i][1] = sums[i+1]/((i+1)*1.0);
    }
    for(int k=2;k<=K;k++){
        for(int i=0;i<n;i++){
            for(int j=k-2;j<i;j++){
                dp[i][k] = max(dp[i][k],dp[j][k-1]+(sums[i+1]-sums[j+1])/((i-j)*1.0));
            }
        }
    }

    return dp[n-1][K];
}

int main(){
    vector<int> arr{9,1,2,3,9};
    double i = largestSumOfAverages(arr,3);

    system("pause");
}
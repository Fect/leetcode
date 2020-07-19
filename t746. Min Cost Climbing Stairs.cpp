#include <bits/stdc++.h>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {

    int n = cost.size();
    vector<int> dp(n+1,0);    

    dp[0] = cost[0];
    dp[1] = cost[1];

    for(int i=2;i<n;i++){
        int tem = min(dp[i-1]+cost[i],dp[i-2]+cost[i]);
        dp[i] = tem;
    }
    
    return min(dp[n-1],dp[n-2]);
}

int main(){
    vector<int> dp{0,0,1,1};
    int res = minCostClimbingStairs(dp);
    cout<<res<<endl;
    system("pause");
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {

    int n = prices.size();

    vector<int> dp1(n,0);
    vector<int> dp2(n,0);

    dp1[0] = -prices[0]; //买
    dp2[0] = 0;

    dp1[1] = max(dp1[0],-prices[1]);
    dp2[1] = max(dp2[0],dp1[0]+prices[1]);

    for(int i=2;i<n;i++){
        dp1[i] = max(dp1[i-1],dp2[i-2]-prices[i]);   //买
        dp2[i] = max(dp2[i-1],dp1[i-1]+prices[i]); //卖
    }

    return max(dp1[n-1],dp2[n-1]);
}
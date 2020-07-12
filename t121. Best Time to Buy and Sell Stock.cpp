#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {

    int res = 0;
    int start = prices[0];
    for(int i=1;i<prices.size();i++){
        if(prices[i]<start){
            start = prices[i];
        }else{
            res = min(res,prices[i]-start);
        }
    }

    return res;
}
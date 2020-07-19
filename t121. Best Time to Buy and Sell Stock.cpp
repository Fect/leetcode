#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {

    int pre = INT_MAX;

    int res = 0;

    for(int i=0;i<prices.size();i++){
        if(prices[i]<pre){
            pre = prices[i];
        }

        if(prices[i]>pre){
            res = max(res,prices[i]-pre);
        }
    }

    return res;
}

int main(){
    vector<int> dp{7,1,5,3,6,4};
    int res = maxProfit(dp);
    cout<<res<<endl;
    system("pause");
    return 0;
}
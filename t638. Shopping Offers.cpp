#include <bits/stdc++.h>
using namespace std;

int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {

    int res = 0;

    int n = price.size();
    for(int i=0;i<n;i++){
        res+=needs[i]*price[i];
    }
    for(auto offer:special){
        
        bool flag = true;
        for(int i=0;i<n;i++){
            if(offer[i]>needs[i]){
                flag = false;
            }
            needs[i] -= offer[i];
        }
        if(flag){
            res = min(res,shoppingOffers(price,special,needs)+offer.back());
        }
        for(int i=0;i<n;i++){
            needs[i]+=offer[i];
        }
    }

    return res;
}
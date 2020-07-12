#include<bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> res;

    int ma = INT8_MIN;
    for(int i=0;i<candies.size();i++){
        ma = max(ma,candies[i]);
    }
    for(int i=0;i<candies.size();i++){
        if(candies[i]+extraCandies>=ma){
            res.push_back(true);
        }else{
            res.push_back(false);
        }
    }

    return res;
}
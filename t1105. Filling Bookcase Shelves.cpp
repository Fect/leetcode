#include<bits/stdc++.h>
using namespace std;

int minHeightShelves(vector<vector<int>>& books, int shelf_width) {

    int res;
    int n = books.size();
    if(n<=0){
        return 0;
    }

    vector<int> dp;
    dp.push_back(books[0][1]);
    for(int i=1;i<n;i++){
        int curWidth = books[i][0];
        int maxHei = books[i][1];
        int minDp = maxHei+dp.back();
        for(int j=i-1;j>=0;j--){
            curWidth+=books[j][0];
            if(curWidth>shelf_width){
                break;
            }
            maxHei = max(maxHei,books[j][1]);
            if(j==0){
                minDp = min(minDp,maxHei);
            }else{
                minDp = min(minDp,maxHei+dp[j-1]);
            }
        }
        dp.push_back(minDp);
    }
    return dp.back();
}
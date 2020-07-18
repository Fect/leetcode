#include <bits/stdc++.h>
using namespace std;

int maxScore(vector<int>& cardPoints, int k) {

    int len = cardPoints.size();

    int lastSum = 0;
    for(int i=0;i<len-k;i++){
        lastSum+=cardPoints[i];
    }

    int totalSum = lastSum;
    for(int i=len-k;i<len;i++){
        totalSum+=cardPoints[i];
    }

    if(len==k){
        return totalSum;
    }
    int l = 0,r = len-k-1;
    int res = totalSum-lastSum;
    while(l<k){
        lastSum-=cardPoints[l];
        l++;
        r++;
        lastSum+=cardPoints[r];
        res = max(res,totalSum-lastSum);
    }

    return res;
}
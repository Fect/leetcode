#include <bits/stdc++.h>
using namespace std;

int videoStitching(vector<vector<int>>& clips, int T) {

    sort(clips.begin(),clips.end());
    vector<int> dp(T+1,INT_MAX);

    dp[0] = 0;
    for(vector<int> array:clips){
        for(int i=array[0];i<=min(T,array[1]);i++){
            if(!(dp[array[0]]<INT_MAX)){
                break;
            }
            for(int j=array[0];j<i;j++){
                dp[i] = min(dp[i],dp[j]+1);
            }
        }
    }

    return dp[T]<INT_MAX?dp[T]:-1;
}
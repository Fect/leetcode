#include<bits/stdc++.h>
using namespace std;

bool isPre(string& a,string& b){
    if(a.size()>=b.size())
        return false;
    for(int i=0;i<b.size();i++){
        if(a[i]!=b[i]){
            return a.substr(i)==b.substr(i+1);
        }
    }
    return false;
}

int longestStrChain(vector<string>& words) {

    int n = words.size();
    if(n<=0){
        return 0;
    }        
    vector<int> dp(n,1);
    auto cmp = [](string& a,string& b){
        return a.size()<b.size();
    };
    sort(words.begin(),words.end(),cmp);
    int res = 0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(isPre(words[j],words[i])){
                dp[i] = max(dp[j]+1,dp[i]);
            }
            res = max(res,dp[i]);
        }
    }
    return res;
}
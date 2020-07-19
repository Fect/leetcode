#include <bits/stdc++.h>
using namespace std;

vector<int> numsSameConsecDiff(int N, int K) {

    if(N==1)
        return{0,1,2,3,4,5,6,7,8,9};
    
    vector<int> res;
    for(int i=1;i<=9;i++){
        help(res,i,N-1,K);
    }

    return res;
}

void help(vector<int>& res,int cur,int N,int K){
    if(N==0){
        res.push_back(cur);
        return;
    }

    int tem = cur%10;
    if(tem+K<=9){
        help(res,cur*10+tem+K,N-1,K);
    }
    if(tem-K>=0&&K){
        help(res,cur*10+tem-K,N-1,K);
    }
}
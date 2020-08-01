#include<bits/stdc++.h>
using namespace std;

int numberOfArithmeticSlices(vector<int>& A) {

    int cur = 0;
    int res = 0;
    for(int i=2;i<A.size();i++){
        if(A[i]-A[i-1]==A[i-1]-A[i-2]){
            cur++;
            res+=cur;
        }else{
            cur=0;
        }
    }

    return res;
}
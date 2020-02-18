#include <bits/stdc++.h>
using namespace std;

int numSubarraysWithSum(vector<int>& A, int S) {

    int n = A.size();
    vector<int> dp(n+1,0);
    int curn = 0;
    int res = 0;
    unordered_map<int,int> m;
    m[0] = 1;
    for(int i=0;i<A.size();i++){
        curn+=A[i];
        dp[i+1] = curn;
        if(m.find(dp[i+1]-S)!=m.end()){
            res+=m[dp[i+1]-S];
        }    
        m[dp[i+1]]++;
    }
    return res;
}

int main(){
    vector<int> dp{0,0,0,0,0};
    int res = numSubarraysWithSum(dp,0);
    //system("pause");
}
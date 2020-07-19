#include <bits/stdc++.h>
using namespace std;

bool divisorGame(int N) {

    vector<int> dp(N+1,0);

    dp[1] = 0;
    bool flag = false;
    for(int i=2;i<N+1;i++){
        for(int j=i-1;j>=1;j--){
            if(i%j==0){
                if(dp[i-j]==0){
                    dp[i] = 1;
                    flag = true;
                    break;
                }
            }
        }
        if(!flag){
            dp[i] = 0;
        }
    }
    return dp[N];
}

int main(){
    int res = divisorGame(2);
    cout<<res<<endl;
    system("pause");
    return 0;
}
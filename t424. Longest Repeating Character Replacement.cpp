#include <bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k) {

    if(s.empty()){
        return 0;
    }

    int res = 0;
    int left = 0,right,most;
    vector<int> dp(26,0);
    most = ++dp[s[0]-'A'];
    for(right=1;right<s.size();right++){
        most = max(most,++dp[s[right]-'A']);
        if(right-left+1>k+most){
            dp[s[left++]-'A']--;
            //left--;
        }else{
            res = max(res,right-left+1);
        }
    } 
    return res;      
}

int main(){
    characterReplacement("AABABBA",1);
    system("pause");
}

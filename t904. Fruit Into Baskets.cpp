#include <bits/stdc++.h>
using namespace std;

int totalFruit(vector<int>& tree) {

    unordered_map<int,int> dp;
    int res=0,start=0,n=tree.size();

    for(int i=0;i<n;i++){
        dp[tree[i]]++;
        if(dp.size()>2){
            if(--dp[tree[start]]==0){
                dp.erase(tree[start]);
            }
            start++;
        }else{
            res = max(res,i-start+1);
        }
    }  
    return res;      
}
int main(){
    vector<int> dd{1,2,3,2,2};
    int res = totalFruit(dd);
    system("pause");
}
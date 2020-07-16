#include <bits/stdc++.h>
using namespace std;

int longestSubsequence(vector<int>& arr, int difference) {

    int res = 0;
    int n = arr.size();
    vector<int> df(n,0);
    
    unordered_map<int,int> map;

    for(int i=0;i<n;i++){
        if(map.find(arr[i]-difference)!=map.end()){
            map[arr[i]] = max(map[arr[i]],map[arr[i]-difference]+1);
        }else{
            map[arr[i]] = 1;
        }
        res = max(res,map[arr[i]]);
    }

    return res;
}

int main(){
    vector<int> dd{1,5,7,8,5,3,4,2,1};
    int res = longestSubsequence(dd,-2);
    //system("pause");
}
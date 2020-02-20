#include <bits/stdc++.h>
using namespace std;

int threeSumMulti(vector<int>& A, int target) {
    
    unordered_map<int,int> map;
    int res = 0,M = 1e9 + 7;
    for(int i=1;i<A.size();i++){
        if(map.find(target-A[i])!=map.end()){
            res = (res+map[target-A[i]])%M;
        }
        for(int j=0;j<i;j++){
            map[A[i]+A[j]]++;
        }
    }
    return res;
}
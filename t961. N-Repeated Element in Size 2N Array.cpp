#include <bits/stdc++.h>
using namespace std;

int repeatedNTimes(vector<int>& A) {

    unordered_map<int,int> map;
    for(int i=0;i<A.size();i++){
        map[A[i]]++;
        if(map[A[i]]>1){
            return A[i];
        }
    }

    return A[0];
}
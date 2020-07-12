#include <bits/stdc++.h>
using namespace std;

int mctFromLeafValues(vector<int>& arr) {

    int res = 0;
    while(arr.size()>1){
        int mi = INT_MAX;
        int minind;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]*arr[i+1]<mi){
                mi = arr[i]*arr[i+1];
                minind = arr[i]>arr[i+1]?i:i+1;
            }
        }
        res+=mi;
        arr.erase(arr.begin()+minind);
    }
    return res;
}
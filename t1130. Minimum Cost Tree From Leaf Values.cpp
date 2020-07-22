#include <bits/stdc++.h>
using namespace std;

int mctFromLeafValues(vector<int>& arr) {

    int res = 0;
    while(arr.size()>1){
        int mi = INT_MAX;
        int midindex;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]*arr[i+1]<mi){
                mi = arr[i]*arr[i+1];
                midindex = arr[i]<arr[i+1]?arr[i]:arr[i+1];
            }
        }
        res+=mi;
        arr.erase(arr.begin()+midindex);
    }

    return res;
}
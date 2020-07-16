#include <bits/stdc++.h>
using namespace std;

int lastStoneWeightII(vector<int>& stones) {

    int sum = 0;
    for(int i=0;i<stones.size();i++){
        sum += stones[i];
    }
    int n = sum>>1;
    vector<int> f(n+1);
    for(int stone:stones){
        for(int i=n;i>=stone;i--){
            f[i] = max(f[i],f[i-stone]+stone);
        }
    }

    return sum-2*f[n];

}
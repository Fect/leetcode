#include <bits/stdc++.h>
using namespace std;

int numberOfSubarrays(vector<int>& nums, int k) {

    int res = 0;
    map<int,int> m;
    
    m[0] = 1;
    int curm = 0;
    for(int i=0;i<nums.size();i++){
        curm+=nums[i]&1;
        if(m.find(curm-k)!=m.end()){
            res+=m[curm-k]+1;
        }
        m[curm]++;
    } 

    return res;
}
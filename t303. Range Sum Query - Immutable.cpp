#include <bits/stdc++.h>
using namespace std;

class NumArray {
private:
    vector<int> dp;
public:
    NumArray(vector<int>& nums) {
        int su = 0;
        for(int i=0;i<=nums.size();i++){
            dp.push_back(su);
            su+=nums[i];
        }
    }
    
    int sumRange(int i, int j) {
        return dp[j+1]-dp[i-1];
    }
};
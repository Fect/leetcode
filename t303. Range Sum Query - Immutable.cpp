#include <bits/stdc++.h>
using namespace std;

class NumArray {
public:
    vector<int> rangSum;
    NumArray(vector<int>& nums) {
        int s1 = 0;
        rangSum.push_back(s1);
        for(int i=0;i<nums.size();i++){
            s1+=nums[i];
            rangSum.push_back(s1);
        }
    }
    
    int sumRange(int i, int j) {
        return rangSum[j+1]-rangSum[i];
    }
};
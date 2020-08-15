#include <bits/stdc++.h>
using namespace std;

int deleteAndEarn(vector<int>& nums) {

    int pre = 0,avoid=0,take = 0;
    sort(nums.begin(), nums.end());
    for(int i=0;i<nums.size();i++){
        int tem = max(avoid,take);
        if((i!=0)&&nums[i]==nums[i-1]){
            take+=nums[i];
        }
        else if(pre+1==nums[i]){
            take = avoid+nums[i];
            avoid =  tem;
        }
        else{
            take = tem+nums[i];
            avoid = tem;
        }
        pre = nums[i];
    }

    return max(take,avoid);
}
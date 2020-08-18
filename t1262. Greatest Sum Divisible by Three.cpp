#include<bits/stdc++.h>
using namespace std;

int maxSumDivThree(vector<int>& nums) {

    vector<int> dp1;
    vector<int> dp2;

    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        if(nums[i]%3==1){
            dp1.push_back(nums[i]);
        }
        else if(nums[i]%3==2){
            dp2.push_back(nums[i]);
        }
    }
    sort(dp1.begin(),dp1.end());
    sort(dp2.begin(),dp2.end());
    if(sum%3==0){
        return sum;
    }

    if(sum%3==1){
        int t1=0,t2=0;
        if(dp1.size()>0){
            t1 = sum-dp1[0];
        }
        if(dp2.size()>1){
            t2 = sum-dp2[0]-dp2[1];
        }
        return max(t1,t2);
    }

    if(sum%3==2){
        int t1=0,t2=0;
        if(dp2.size()>0){
            t1 = sum-dp2[0];
        }
        if(dp1.size()>1){
            t2 = sum-dp1[0]-dp1[1];
        }
        return max(t1,t2);
    }

    return sum;
}
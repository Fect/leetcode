#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> res;

    for(int i=0;i<n;i++){
        res.push_back(nums[i]);
        res.push_back(nums[i+n]);
    }
    return res;
}

int main(){
    system("pause");
    return 0;
}
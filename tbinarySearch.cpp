#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& dp,int target){   //基础二分查找
    int left = 0;
    int right = dp.size()-1;

    while(left<=right){
        int mind = (left+right)/2;
        if(target<dp[mind]){
            right = mind-1;
        }else if(target>dp[mind]){
            left = mind+1;
        }else{
            return mind;
        }
    }

    return -1;
}

int binaryFE(vector<int>& dp,int target){   //找第一个等于的

    int left = 0;
    int right = dp.size()-1;

    while(left<right){
        int mind = (left+right)/2;
        if(target<=dp[mind]){
            right = mind-1;
        }else if(target>dp[mind]){
            left = mind+1;
        }
    }

    return right;
}

int binaryFT(vector<int>& dp,int target){   //第一个找大于等于的

    int left = 0;
    int right = dp.size()-1;

    while(left<right){
        int mind = (left+right)/2;
        if(target<=dp[mind]){
            right = mind-1;
        }else if(target>dp[mind]){
            left = mind+1;
        }
    }

    return right;
}

int binaryLT(vector<int>& dp,int target){   //找最后等于的

    int left = 0;
    int right = dp.size()-1;

    while(left<right){
        int mind = (left+right)/2;
        if(target<dp[mind]){
            right = mind-1;
        }else if(target>=dp[mind]){
            left = mind+1;
        }
    }

    return right;
}

int bin_seatch(vector<int>& data,double num){
 
    int left=0,right=data.size()-1;
    while(left<=right){
        int mid = (right-left)/2+left;
        if(data[mid]<num){
            left = mid+1;
        }else if(data[mid]>num){
            right = mid-1;
        }
    }
 
    return left;
}
 
int GetNumberOfK(vector<int> data ,int k) {
 
    int acu = bin_seatch(data,k+0.5);
    int bcu = bin_seatch(data,k-0.5);
    cout<<acu<<" "<<bcu;
    return acu-bcu;
}

int main(){
    vector<int> arr{2,2,3,3,5,7,8};

    cout<<binaryLT(arr,3);    

    system("pause");
}
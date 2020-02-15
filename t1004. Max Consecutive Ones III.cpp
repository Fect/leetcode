#include <bits/stdc++.h>
using namespace std;

int longestOnes(vector<int>& A, int K) {

    int res = 0;
    int left = 0;
    int right = 0;

    int zero = 0;
    for(;right<A.size();right++){
        if(A[right]==0){
            zero++;
        }
        while(zero>K){
            if(A[left++]==0){
                zero--;
            }
        }
        res = max(res,right-left+1);
    }        
    return res;
}

int main(){

    vector<int> dp{1,1,1,0,0,0,1,1,1,1,0};
    int res = longestOnes(dp,2);
    system("pause");

}
#include <bits/stdc++.h>
using namespace std;

int longestMountain(vector<int>& A) {

    int res = 0;
    int up=0,down=0;
    for(int i=1;i<A.size();i++){
        if((down&&A[i]>A[i-1])||A[i]==A[i-1]){
            up=0;
            down=0;
        }
        if(A[i]>A[i-1]){
            up++;
        }
        if(A[i]<A[i-1]){
            down++;
        }
        if(up>0&&down>0)
            res = max(res,down+up+1);
    }

    return res;

}
int main(){
    vector<int> dp{2,1,4,7,3,2,5};
    int res = longestMountain(dp);
    system("pause");
}
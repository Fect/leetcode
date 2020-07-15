#include <bits/stdc++.h>
using namespace std;

int getSum(vector<vector<int>> & preSum, int x1, int y1, int x2, int y2){
    return preSum[x2][y2] - preSum[x1 - 1][y2] - preSum[x2][y1 - 1] + preSum[x1 - 1][y1 - 1];
}

int numSubmat(vector<vector<int>>& mat) {

    int res = 0;
    int m = mat.size();
    int n = mat[0].size();
    vector<vector<int>> preSum(m+1,vector<int>(n+1,0));

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            preSum[i][j] = preSum[i-1][j]+preSum[i][j-1]-preSum[i-1][j-1]+mat[i-1][j-1];
        }
    }

    for(int row=1;row<=m;row++){
        for(int len=1;row-1+len<=m;len++){
            for(int col=1;col<=n;col++){
                if(getSum(preSum,row,col,row+len-1,col)==len){
                    int tem = col;
                    while(tem <= n&&getSum(preSum,row,tem,row+len-1,tem)==len)
                        tem++;
                    int length = tem-col;
                    res+=(1+length)*length/2;
                    col = tem-1;
                }
            }
        }
    }
    return res;
}



int main(){
    vector<vector<int>> dd;
    vector<int> v1{1,0,1};
    vector<int> v2{1,1,0};
    vector<int> v3{1,1,0};

    dd.push_back(v1);
    dd.push_back(v2);
    dd.push_back(v3);

    int res = numSubmat(dd);
    cout<<res<<endl;
    //system("pause");
}

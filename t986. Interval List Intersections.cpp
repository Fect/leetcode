#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {

    int i = 0;
    int j = 0;
    vector<vector<int>> res;
    while(i<A.size()&&j<B.size()){
        int al = A[i][0];
        int ah = A[i][1];

        int bl = B[j][0];
        int bh = B[j][1];

        int il,ih;
        if((ah>=bl&&bh>=al)||(bh>=al&&ah>=bl)){      //有交集
            il = max(al,bl);
            ih = min(ah,bh);

            res.push_back({il,ih});
            if(ih<ah){
                j++;
            }
            else if(ih<bh){
                i++;
            }else{
                i++;
                j++;
            }
        }else{
            if(ah>bh){
                j++;
            }else{
                i++;
            }
        }
    }
    return res;
}
int main(){
    vector<vector<int>> A;
    A.push_back({5,10});

    vector<vector<int>> B;
    B.push_back({5,6});
    vector<vector<int>> res = intervalIntersection(A,B);
    for(int i=0;i<res.size();i++){
        cout<<res[i][0]<<" "<<res[i][1]<<endl;
    }
    system("pause");
}
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>& array,vector<bool>& visit,int cum,int& res){
    if(cum>99&&cum<=999){
        cout<<cum<<endl;
        return;
    }
    for(int i=0;i<array.size();i++){
        if(visit[i]){
            continue;
        }
        visit[i] = true;
        int tem = cum*10+array[i];
        dfs(array,visit,tem,res);
        visit[i] = false;
    }
}

void code2(){
    
    vector<int> array{1,2,3,4};
    int res = 0;
    
    int n = array.size();
    vector<bool> visit(n,false);

    for(int i=0;i<4;i++){
        if(visit[i]){
            continue;
        }

        visit[i] = true;
        int cum = array[i];
        dfs(array,visit,cum,res);
        visit[i] = false;
    }
}

int main(){
    code2();
    system("pause");
}
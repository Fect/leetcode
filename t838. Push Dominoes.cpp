#include <bits/stdc++.h>
using namespace std;

string pushDominoes(string dominoes) {
    
    bool flag = true;
    int n = dominoes.size();
    while(flag){
        flag = false;

        string tem = dominoes;
        if(dominoes[0]=='.'&&n>1){
            if(dominoes[1]=='L'){
                tem[0] = 'L';
                flag = true;
            }
        }

        for(int i=1;i<n-1;i++){
            if(dominoes[i]=='.'&&(dominoes[i-1]!='R'||dominoes[i+1]!='L')){
                if(dominoes[i-1]=='R'){
                    tem[i] = 'R';
                    flag = true;
                }
                if(dominoes[i+1]=='L'){
                    tem[i] = 'L';
                    flag = true;
                }
            }
        }

        if(dominoes[n-1]=='.'&&n>1){
            if(dominoes[n-2]=='R'){
                tem[n-1] = 'R';
                flag = true;
            }
        }

        dominoes = tem;
    } 

    return dominoes;
}

int main(){
    string str = ".L.R...LR..L..";
    string i = pushDominoes(str);

    system("pause");
}
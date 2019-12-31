#include <bits/stdc++.h>
using namespace std;

int balancedStringSplit(string s) {

    int t = 0;
    int res = 0;
    for(char c:s){
        if(c=='R'){
            t++;
        }else{
            t--;
        }
        if(t==0){
            res++;
        }
    }

    return res;
}

int main(){

}
#include <bits/stdc++.h>
using namespace std;

double mem[200][200];

double soupServings(int N) {
    int n = ceil(N/25.0);
    if(N>=4800){
        return 1.0;
    }else{
        return help(n,n);
    }
}

double help(int a,int b){
    if(a<=0&&b>0){
        return 1;
    }
    if(a<=0&&b<=0){
        return 0.5;
    }
    if(b<=0&&a>0){
        return 0;
    }
    if(mem[a][b]>0){
        return mem[a][b];
    }

    mem[a][b] = 0.25*(help(a-4,b)+help(a-3,b-1)+help(a-2,b-2)+help(a-1,b-3));
    return mem[a][b];

}


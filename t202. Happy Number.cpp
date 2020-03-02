#include <bits/stdc++.h>
using namespace std;

bool isHappy(int n) {

    unordered_map<int,int> map;
    while(true){
        int su = 0;
        while(n>0){
            int a = n%10;
            su+=a*a;
            n = n/10;
        }
        n = su;
        if(map.find(n)!=map.end()){
            return false;
        }
        if(n==1){
            return true;
        }
    }
    return false;
}
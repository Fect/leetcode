#include <bits/stdc++.h>
using namespace std;

vector<int> powerfulIntegers(int x, int y, int bound) {

    unordered_set<int> s;
    vector<int> res;
    for(int i=0;pow(x,i)<=bound;i++){
        for(int j=0;pow(x,i)+pow(y,j)<=bound;j++){
            if(!s.count((pow(x,i)+pow(y,j)))){
                s.insert((pow(x,i)+pow(y,j)));
                res.push_back(pow(x,i)+pow(y,j));
            }
            if(y==1){
                break;
            } 
        }
        if(x==1){
            break;
        }
    }

    return res;
}
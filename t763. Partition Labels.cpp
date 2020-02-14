#include <bits/stdc++.h>
using namespace std;

vector<int> partitionLabels(string S) {

    map<char,int> m;
    for(int i=0;i<S.size();i++){
        m[S[i]] = i;
    }    
    int start = 0;
    int end = 0;    
    vector<int> res;
    for(int i=0;i<S.size();i++){
        end = max(end,m[S[i]]);
        if(i==end){
            res.push_back(end-start+1);
            start = end+1;
        }
    }
    return res;
}
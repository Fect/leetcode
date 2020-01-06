#include <bits/stdc++.h>
using namespace std;

vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {

    int n = queries.size();
    int l = s.size();
    vector<vector<int>> v(l+1,vector<int>(26,0));
    vector<bool> res;

    for(int i=1;i<=l;i++){
        v[i] = v[i-1];
        v[i][s[i-1]-'a']++;
    }       
    for(int i=0;i<n;i++){
        int diff = 0;
        for(int j=0;j<26;j++){
            if((v[queries[i][1]+1][j]-v[queries[i][0]][j])%2!=0){
                diff++;
            }
        }
        if((diff/2)<=queries[i][2]){
            res.push_back(true);
        }else{
            res.push_back(false);
        }
    }
    return res;
}
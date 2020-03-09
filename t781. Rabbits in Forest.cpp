#include <bits/stdc++.h>
using namespace std;

    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> m;
        int res=0;
        for(auto ix:answers){
            if(!m.count(ix)||m[ix]==0||ix==0){
                res=res+ix+1;
            }
            m[ix]++;
            if(m[ix]==ix+1){
                m[ix]=0;
            }
            
        }   
        return res;
    }
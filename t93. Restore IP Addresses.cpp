#include <bits/stdc++.h>
using namespace std;

void restoreHelp(string &s,vector<string> &res,string current,int dot){
    if(s.size()>12){
        return;
    }

    int n = s.size();
    for(int i=1;i<=min(3,n);i++){
        string seg = s.substr(0,i);
        string rest = s.substr(i);
        if(rest.size()<dot){
            break;
        }
        if(seg.size()>1&&seg[0]=='0'){
            break;
        }
        if(atoi(seg.c_str())>255||atoi(seg.c_str())<0){
            continue;
        }
        if(dot>0){
            restoreHelp(rest,res,current+seg+".",dot-1);
        }
        if(dot==0&&rest.size()==0){
            res.push_back(current+seg);
        }
    }
}

vector<string> restoreIpAddresses(string s) {

    vector<string> res;
    restoreHelp(s,res,"",3);
    return res;        
}
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string,int> &a,pair<string,int> &b){
    return a.first.size()>b.first.size();
}

bool isSub(string &s1,string &s2){
    int i=0,j=0;
    for(;i<s1.size();i++){
        while(j<s2.size()&&s1[i]!=s2[j]){
            j++;
        }
        if(j==s2.size()){
            return false;
        }
        j++;
    }
    return true;
}

int findLUSlength(vector<string>& strs) {

    unordered_map<string,int> map;
    for(int i=0;i<strs.size();i++){
        map[strs[i]]++;
    }

    vector<pair<string,int>> ve;
    for(auto it=map.begin();it!=map.end();it++){
        ve.push_back(*it);
    }
    sort(ve.begin(),ve.end(),compare);

    for(int i=0;i<ve.size();i++){
        int index = 0;
        if(ve[i].second==1){
            for(;index<i;index++){
                if(isSub()){
                    break;
                }
            }
            if(index==i){
                return ve[i].first.size();
            }
        }
    }
    return -1;
}
#include <bits/stdc++.h>
using namespace std;

class TimeMap {
private:
    unordered_map<string,map<int,string>> ma;

public:
    /** Initialize your data structure here. */
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        ma[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
        if(!ma.count(key)){
            return "";
        }
        if(ma[key].count(timestamp)) 
            return ma[key][timestamp];
        for(auto ix=ma[key].rbegin();ix!=ma[key].rend();ix++){
            if(ix->first>timestamp){
                continue;
            }else{
                return ix->second;
            }
        }
        return "";
    }
};
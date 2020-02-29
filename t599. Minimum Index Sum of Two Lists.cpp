#include <bits/stdc++.h>
using namespace std;

vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {

    unordered_map<string,int> m1;
    vector<string> res;
    int sumr = INT_MAX;
    for(int i=0;i<list1.size();i++){
        m1[list1[i]]=i;
    }

    for(int i=0;i<list2.size();i++){
        if(m1.find(list2[i])!=m1.end()){
            if(m1[list2[i]]+i<sumr){
                sumr = m1[list2[i]]+i;
                res.clear();
                res.push_back(list2[i]);
            }else if(m1[list2[i]]+i==sumr){
                res.push_back(list2[i]);
            }  
        }
    }

    return res;
}
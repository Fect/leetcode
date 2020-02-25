#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {

    unordered_map<int,int> map;
    unordered_map<int,int> map1;
    for(int i=0;i<arr.size();i++){
        map[arr[i]]++;
    }
    unordered_map<int,int>::iterator it;
    for(it=map.begin();it!=map.end();it++){
        map1[it->second]++;
        if(map1[it->second]>1){
            return false;
        }
    }

    return true;
}
int main(){
    vector<int> dp{1,2,2,1,1,3};
    int res = uniqueOccurrences(dp);
    system("pause");
}

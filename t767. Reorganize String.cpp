#include <bits/stdc++.h>
using namespace std;

string reorganizeString(string S) {

    string res = "";
    unordered_map<char,int> m;
    priority_queue<pair<int,char>> q;
    for(char c:S){
        m[c]++;
    }
    for(auto a:m){
        if(a.second>(S.length()+1)/2){
            return "";
        }
        q.push({a.second,a.first});
    }

    while(q.size()>=2){
        auto a1 = q.top();
        q.pop();
        
        auto a2 = q.top();
        q.pop();

        res+=a1.second;
        res+=a2.second;
        if(--a1.first>0)
            q.push(a1);
        if(--a2.first>0)
            q.push(a2);
    }
    if(q.size()>0){
        res+=q.top().second;
    }
    return res;
}

int main(){

}
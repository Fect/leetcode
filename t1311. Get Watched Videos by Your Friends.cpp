#include <bits/stdc++.h>
using namespace std;

vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {

    queue<int> q;
    q.push(id);
    unordered_set<int> visited;
    visited.insert(id);
    for(int i=0;i<level&&!q.empty();i++){
        for(int j=q.size();j>0;j--){
            const auto t = q.front();
            q.pop();
            for(auto &f:friends[t]){
                if(!visited.count(f)){
                    q.push(f);
                    visited.insert(f);
                }
            }
        }
    }
    unordered_map<string,int> freq;
    while(!q.empty()){
        const auto t = q.front();
        q.pop();
        for(const auto c:watchedVideos[t]){
            freq[c]++;
        }
    }   

    const auto cmp = [&](auto &a, auto &b) {
            if (a.second != b.second) return a.second > b.second;
            return a.first > b.first;
        };
        priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(cmp)> pq(cmp);
        for (const auto &p : freq) {
            pq.push(p);
        }
    
    vector<string> res;
    while(!pq.empty()){
        const auto t = pq.top();
        pq.pop();
        res.push_back(t.first);
    }

    return res;
}
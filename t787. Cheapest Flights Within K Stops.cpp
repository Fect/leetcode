#include <bits/stdc++.h>
using namespace std;

// int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {

//     int res = INT_MAX;

//     unordered_map<int,vector<vector<int>>> ma;
//     unordered_set<int> visit{{src}};

//     for(auto flight:flights){
//         ma[flight[0]].push_back({flight[1],flight[2]});
//     }

//     help(ma,src,dst,K,visit,0,res);

//     return (res == INT_MAX) ? -1 : res;

// }

// void help(unordered_map<int,vector<vector<int>>>& ma,int cur,int dst,int K,unordered_set<int>& visit,int out,int& res){
//     if(cur==dst){
//         res = out;
//         return;
//     }
//     if(K<0){
//         return;
//     }
//     for(auto m:ma[cur]){
//         if(visit.count(m[0])||m[1]+out>res){
//             continue;
//         }
//         visit.insert(m[0]);
//         help(ma,m[0],dst,K-1,visit,out+m[1],res);
//         visit.erase(m[0]);

//     }
// }

int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {

    int res = INT_MAX;
    int cnt = 0;
    unordered_map<int,vector<vector<int>>> ma;
    queue<vector<int>> q{{{src, 0}}};

    for(auto flight:flights){
        ma[flight[0]].push_back({flight[1],flight[2]});
    }

    while(!q.empty()){
        for(int i=q.size();i>0;i--){
            auto te = q.front();
            q.pop();
            if(te[0]==dst){
                res = min(res,te[1]);
            }
            for(auto t:ma[te[0]]){
                if(te[1]+t[1]>res){
                    continue;
                }
                q.push({t[0],te[1]+t[1]});
            }
        }
        if(cnt++>K){
            break;
        }
    }

    return (res == INT_MAX) ? -1 : res;;
}


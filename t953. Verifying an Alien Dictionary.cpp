#include <bits/stdc++.h>
using namespace std;

bool isAlienSorted(vector<string>& words, string order) {
    unordered_map<char,int> map;
    for(int i=0;i<order.size();i++){
        map[order[i]]=i;
    }
    for(int i=1;i<words.size();i++){
        if(words[i-1].size()>words[i].size()){
            return false;
        }
        for(int j=0;j<words[i-1].size();j++){
            if(map[words[i-1][j]]<map[words[i][j]]){
                break;
            }
            if(map[words[i-1][j]]>map[words[i][j]]){
                return false;
            }
        }
    }

    return true;
}
int main(){
    vector<string> dp;
    dp.push_back("k");
     dp.push_back("leetcode");
    string so = "hlabcdefgijkmnopqrstuvwxyz";
    bool res = isAlienSorted(dp,so);
    system("pause");
}
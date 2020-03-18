#include <bits/stdc++.h>
using namespace std;

vector<string> findRepeatedDnaSequences(string s) {
    int cur= 0;
    vector<string> res;
    unordered_set<int,int> ma; 
    if(s.size()<10){
        return res;
    }
    int mask = 0x7ffffff;
    for (int i = 0; i < 9; ++i) {
        cur = (cur << 3) | (s[i] & 7);
    }
    for(int i=9;i<s.size();i++){
        cur = ((cur&mask)<<3)|(s[i]&7);
        if(ma.count(cur)){
            res.push_back();
        }
    }

}

int main(){
    
    findRepeatedDnaSequences("AAAAACCCCC");
    system("pause");
}
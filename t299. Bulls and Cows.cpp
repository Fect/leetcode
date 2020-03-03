#include <bits/stdc++.h>
using namespace std;

string getHint(string secret, string guess) {

    int bulls = 0;
    int cows = 0;
    unordered_map<char,int> map;
    for(int i=0;i<secret.size();i++){
        char s = secret[i];
        char g = guess[i];
        if(s==g){
            bulls++;
        }else{
            if(map[g]>0){
                cows++;
            }
            if(map[s]<0){
                cows++;
            }
            map[s]++;
            map[g]--;
        }
    }
    string res;
    res+=to_string(bulls);
    res+='A';
    res+=to_string(cows);
    res+='B';
    return res;
}
#include <bits/stdc++.h>
using namespace std;

string findLongestWord(string s, vector<string>& d) {

    string res = "";
    for(string word:d){
        int i = 0;
        for(char c:s){
            if(i<word.size()&&word[i]==c){
                i++;
            }
        }
        if(i==word.size()&&word.size()>=res.size()){
            if(word.size()>res.size()||word.compare(res)<0){
                res = word;
            }
        }
    }

}
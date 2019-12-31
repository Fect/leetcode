#include <bits/stdc++.h>
using namespace std;

string alphabetBoardPath(string target) {

    char maps[10][6]={"abcde", "fghij", "klmno", "pqrst", "uvwxy", "z"};
    map<char,pair<int,int>> map;

    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            map[maps[i][j]] = make_pair(i,j);
        }
    }
    string res;
    int nx = 0;
    int ny = 0;
    int chx,chy;
    for(int i=0;i<target.size();i++){
        chx = nx - map[target[i]].first;
        chy = ny - map[target[i]].second;

        if(chx==0&&chy==0){
            res.push_back('!');
        }
        else{
        if(chx>0){
            for(int k=0;k<chx;k++){
                res+='U';
            }
        }
        if(chy>0){
            for(int k=0;k<chy;k++){
                res+='L';
            }
        }
        if(chx<0){
            for(int k=0;k<abs(chx);k++){
                res+='D';
            }
        }
        if(chy<0){
            for(int k=0;k<abs(chy);k++){
                res+='R';
            }
        }
            res+='!';
        }
        nx = map[target[i]].first;
        ny = map[target[i]].second;
    }
    return res;
}
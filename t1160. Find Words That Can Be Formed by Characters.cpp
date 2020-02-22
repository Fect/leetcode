#include <bits/stdc++.h>
using namespace std;

bool match(string str,unordered_map<char,int> map){
    unordered_map<char,int> m1;
    for(int i=0;i<str.size();i++){
        m1[str[i]]++;
        if(map.find(str[i])==map.end()||m1[str[i]]>map[str[i]]){
            return false;
        }
    }
    return true;
}

int countCharacters(vector<string>& words, string chars) {

    int res = 0;
    unordered_map<char,int> map;
    for(int i=0;i<chars.size();i++){
        map[chars[i]]++;
    } 

    for(int i=0;i<words.size();i++){
        if(match(words[i],map)){
            res+=words[i].length();
        }
    }
    return res;
}
int main(){
    vector<string> dp{"cat","bt","hat","tree"};  //easy
    int res = countCharacters(dp,"atach");
    system("pause");
}
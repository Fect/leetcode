#include <bits/stdc++.h>
using namespace std;

string shortestCompletingWord(string licensePlate, vector<string>& words) {
    unordered_map<char,int> map;
    unordered_map<char,int> tmpmap;
    for(int i=0;i<licensePlate.size();i++){
        if(licensePlate[i]>='a'&&licensePlate[i]<='z'){
            map[licensePlate[i]]++;
            continue;
        }
        if(licensePlate[i]>='A'&&licensePlate[i]<='Z'){
            map[licensePlate[i]-'A'+'a']++;
            continue;
        }
    }        
    int minl=INT8_MAX;
    string res;
    for(int i=0;i<words.size();i++){  
        tmpmap.clear();
        for(int j=0;j<words[i].size();j++){
            if(words[i][j]>='a'&&words[i][j]<='z'){
                tmpmap[words[i][j]]++;
                continue;
            }
            if(words[i][j]>='A'&&words[i][j]<='Z'){
                tmpmap[words[i][j]-'A'+'a']++;
                continue;
            }
        }
        unordered_map<char,int>::iterator iter;
        iter = map.begin();
        bool flag = true;
        while(iter != map.end()){
            if(iter->second!=tmpmap[iter->first]){
                flag = false;
            }
            iter++;
        }
        if(flag){
            if(words[i].size()<minl){
                res = words[i];
                minl = res.size();
            }
        }
    }
    return res;
}
int main(){
    string str = "1s3 456";  //easy
    vector<string> dd;
    dd.push_back("looks");
    dd.push_back("pest");
    dd.push_back("stew");
    dd.push_back("show");
    string res = shortestCompletingWord(str,dd);
    system("pause");
}
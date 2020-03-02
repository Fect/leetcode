#include <bits/stdc++.h>
using namespace std;

string longestWord(vector<string>& words) {

    sort(words.begin(),words.end());
    unordered_set<string> srt;

    string res;
    for(auto ss:words){
        if(ss.size()==1||srt.find(ss.substr(0,ss.length()-1))!=srt.end()){
            res = (ss.size()>res.size()?ss:res);
            srt.insert(ss);
        }
    }

    return res;
}

int main(){
    vector<string> dd{"m","mo","moc","moch","mocha","l","la","lat","latt","latte","c","ca","cat"};
    string res = longestWord(dd);
    system("pause");
}
#include <bits/stdc++.h>
using namespace std;

int maxRepOpt1(string text) {

    unordered_map<char,int>m;
    vector<char> chars;
    vector<int> amount;

    char last='1';
    int cou=0;
    for(char c:text){
        m[c]++;
        if(last=='1'){
            last = c;
        }
        if(last==c){
            cou++;
        }else{
            chars.push_back(last);
            amount.push_back(cou);

            last = c;
            cou = 1;
        }
    }

                chars.push_back(last);
            amount.push_back(cou);

    int res = 1;
    for(int i=0;i<chars.size();i++){
        if(i>0&&i<chars.size()-1&&chars[i-1]==chars[i+1]&&amount[i]==1){
            int v = amount[i-1]+amount[i+1];
            if(m[chars[i-1]]>v){
                v+=1;
            }
            res = max(res,v);
        }
        if(m[chars[i]]>amount[i]){
            res = max(amount[i]+1,res);
        }else{
            res = max(amount[i],res);
        }
    }

    return res;
}

int main(){

    //int a = maxRepOpt1("bbbaaabbabbaaaabbbabaaaaabbbabbbbaba");
    cout<<"hello"<<endl;
    system("pause");
    return 0;
}
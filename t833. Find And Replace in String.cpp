#include <bits/stdc++.h>
using namespace std;

string findReplaceString(string S, vector<int>& indexes, vector<string>& sources, vector<string>& targets) {

     if (indexes.size() == 0)
            return S;

    string res;
    bool flag;
    for(int i=0;i<S.size();i++){
        flag = false;
        for(int j=0;j<indexes.size();j++){
            if(i==indexes[j]){
                string str = sources[j];
                string sub1 = S.substr(i,str.size());
                if(sub1!=str){
                    res+=sub1;
                }else{
                    res+=targets[j];
                }
                i+=str.size()-1;
                flag = true;
                break;
            }
        }
        if(!flag){
            res+=S[i];
        }
    }

    return res;
}

int main(){

}
#include <bits/stdc++.h>
using namespace std;

string shiftingLetters(string S, vector<int>& shifts) {
    int n = S.size();
    int num = 0;
    
    vector<int> leihe(n);
    for(int i=shifts.size()-1;i>=0;i--){
        num = (num+shifts[i])%26;
        leihe[i] = num;
    }

    for(int i=0;i<leihe.size();i++){

        S[i] = (S[i]-'a'+shifts[i])%26+'a';
    }
    return S;
}

int main(){
    vector<int> v{3,5,9};

    string res = shiftingLetters("abc",v);
    cout<<res<<endl;
    system("pause");
}
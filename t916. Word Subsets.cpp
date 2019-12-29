#include <bits/stdc++.h>
using namespace std;

bool isSub(string &A,vector<int> m){


    for(int i=0;i<A.size();i++){
        if(m[A[i]-'a']>0){
            
            m[A[i]-'a']--;
        }
    }
    for(int t:m){
        if(t>0){
            return false;
        }
    }

    return true;
}

vector<int> count(string& str){
    vector<int> res(26,0);
    for(char c:str){
        res[c-'a']++;
    }
    return res;
}

vector<string> wordSubsets(vector<string>& A, vector<string>& B) {

    vector<string> res;
    
    vector<int> m(26,0);
    for(int j=0;j<B.size();j++){
        vector<int> temp = count(B[j]);
        for(int i=0;i<26;i++){
            m[i] = max(m[i],temp[i]);
        }
    }

    for(int i=0;i<A.size();i++){
            if(isSub(A[i],m)){
                res.push_back(A[i]);
            }
    } 
    return res;       
}

int main(){

}
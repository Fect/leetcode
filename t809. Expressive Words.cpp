#include <bits/stdc++.h>
using namespace std;

int isExpress(string quer,string word){
    
    int qn = quer.size();
    int wn = word.size();

    int i,j;
    while(i<qn&&j<wn){
        if(quer[i]!=word[j]){
            return false;
        }
        int qsize,wsize;
        
        int t = i+1;
        while(t<qn&&quer[t]==quer[i]){
            t++;
        }
        qsize = t-i+1;

        int k = j+1;
        while(k<wn&&word[k]==word[j]){
            k++;
        }
        wsize = k-j+1;

        if(qsize<3){
            return false;
        }

        i = t;
        j = k;
    }
    
    if(i<qn||j<wn){
        return false;
    }
    return true;
}

int expressiveWords(string S, vector<string>& words) {

    int res = 0;
    for(int i=0;i<words.size();i++){
        if(isExpress(S,words[i])){
            res++;
        }
    }    
    return res;
}

int main(){

    system("pause");
}
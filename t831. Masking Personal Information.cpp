#include <bits/stdc++.h>
using namespace std;

string maskPII(string S) {
        string atSign="@";
        string res="";
        if(S.find(atSign)!=string::npos){
            bool flag=false;
            for(int i=0;i<S.size();i++){
                char c=tolower(S[i]);
                if(i==0||flag){
                    res+=c;
                }else if(S[i+1]=='@'){
                    res+="*****";
                    res+=c;
                    flag=true;
                }
            }
        }else{
            int len=getNumLen(S);
            if(len>=10){
                int cnt=0;
                for(int i=0;i<S.length();i++){
                    if(isdigit(S[i])){
                        cnt++;
                    }else continue;
                    if(cnt==len-4){
                        if(cnt==6){
                            res+="***-***-";
                        }else if(cnt==7){
                            res+="+*-***-***-";
                        }else if(cnt==8){
                            res+="+**-***-***-";
                        }else{
                           res+="+***-***-***-"; 
                        }
                    }else if(cnt>len-4&&isdigit(S[i])){
                        res+=S[i];
                    }
                } 
            }
        }
        
        return res;
    }
    int getNumLen(string s){
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='0'&&s[i]<='9'){
                cnt++;
            }
        }
        return cnt;
    }
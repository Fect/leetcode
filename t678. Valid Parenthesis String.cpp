#include <bits/stdc++.h>
using namespace std;

bool checkValidString(string s) {

    stack<int> le;
    stack<int> xing;

    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            le.push(i);
        }
        if(s[i]=='*'){
            xing.push(i);
        }
        if(s[i]==')'){
            if(!le.empty()){
                le.pop();
            }else if(!xing.empty()){
                xing.pop();
            }else{
                return false;
            }
        }
    }
    if(xing.size()<le.size())
        return false;
    while(!le.empty()){
        int n1 = le.top();
        le.pop();

        int n2 = xing.top();
        xing.pop();
        if(n2<n1){
            return false;
        }
    }

    return true;
}


#include <bits/stdc++.h>
using namespace std;

string defangIPaddr(string address) {
    string res;
    for(char c:address){
        if(c=='.'){
            res+="[.]";
        }else{
            res+=c;
        }
    }

    return res;
}
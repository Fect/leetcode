#include <bits/stdc++.h>
using namespace std;

string fun1(string str){
    string res;
    for(char c:str){
        if(c>='A'&&c<='Z'){
            res.push_back(c-'A'+'a');
        }else{
            res.push_back(c);
        }
    }

    return res;
}

string fun2(string str){
    string res;
    for(char c:str){
        char temp;
        if(c>='A'&&c<='Z'){
            temp = c-'A'+'a';
        }else{
            temp = c;
        }
        if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u'){
            res.push_back('a');
        }else{
            res.push_back(temp);
        }
    }
    return res;
}

vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {

    unordered_map<string,int> v1;
    unordered_map<string,int> dissV;
    unordered_map<string,int> v2;

    for(int i=0;i<wordlist.size();i++){
        v1[wordlist[i]] = i;
        string t1 = fun1(wordlist[i]);
        string t2 = fun2(wordlist[i]);
        if(dissV.find(t1)==dissV.end()){
            dissV[t1] = i;
        }
        if(v2.find(t2)==v2.end()){
            v2[t2] = i;
        }
    }
    vector<string> res;
    for(int i=0;i<queries.size();i++){
        string t1 = fun1(queries[i]);
        string t2 = fun2(queries[i]);
        if(v1.find(queries[i])!=v1.end()){
            res.push_back(queries[i]);
        }else if(dissV.find(t1)!=dissV.end()){
            res.push_back(wordlist[dissV[t1]]);
        }else if(v2.find(t2)!=v2.end()){
            res.push_back(wordlist[v2[t2]]);
        }else{
            res.push_back("");
        }
    }
    return res;
}

int main(){
    
    vector<string> v1;
    v1.push_back("hare");
    v1.push_back("Hare");

    vector<string> v2;
    v2.push_back("HARE");

    spellchecker(v1,v2);

    fun1("HARE");
    system("pause");
}

#include <bits/stdc++.h>
using namespace std;

string freqAlphabets(string s) {
    
    string res="";
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='#'){
            int index=i-1;
            while(index>=0&&s[index]!='#'){
                int num = atoi(s.substr(index,i-index).c_str());
                if(index-1<0||s[index-1]=='#'||atoi(s.substr(index-1,i-index+1).c_str())>26){
                    res.push_back(num-1+'a');
                    i = index;
                    break;
                }
                index--;
            }
        }else{
            char num = s[i]-'1'+'a';
            res.push_back(num);
        }
    }
    reverse(res.begin(),res.end());
    return res;
}


int main(){

    string res = freqAlphabets("12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#");
    cout<<res<<endl;

    system("pause");
}
#include<bits/stdc++.h>
using namespace std;

void countCode(string str){
    int engletter = 0;
    int kg = 0;
    int other = 0;
    for(int i=0;i<str.size();i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
            engletter++;
        }else if(str[i]==' '){
            kg++;
        }else{
            other++;
        }
    }
    cout<<engletter<<" "<<kg<<" "<<other<<endl;
}

int main(){
    string str = "z hln89@$%$ adkfj=1";
    countCode(str);
    system("pause");
}
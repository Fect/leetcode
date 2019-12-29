#include <bits/stdc++.h>
using namespace std;

bool isValid(string S) {
    vector<char> s;
    for(char c:S){
        if(c=='c'){
            int n = s.size();
            if(n<2||s[n-1]!='b'||s[n-2]!='a'){
                return false;
            }
            s.pop_back();
            s.pop_back();
        }else{
            s.push_back(c);
        }
    }  
    return s.size() == 0;
}

int main(){
	cout<<"hello"<<endl;
	system("pause");
	return 0;
}

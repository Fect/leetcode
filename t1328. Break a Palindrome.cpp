#include <bits/stdc++.h>
using namespace std;

string breakPalindrome(string palindrome) {
    int n = palindrome.size();
    if(n==1)
        return "";
    for(int i=0;i<n/2;i++){
        if(i<n/2&&palindrome[i]!='a'){
            palindrome[i] = 'a';
            return palindrome;
        }
    }
    for(int i=n-1;i>=n/2;i--){

        palindrome[i] = palindrome[i]+1;
        return palindrome;
    }        
    return palindrome;
}

int main(){
    
    string str = "aba";
    string res = breakPalindrome(str);
    cout<<res<<endl;

    system("pause");
}
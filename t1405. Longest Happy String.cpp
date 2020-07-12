#include<bits/stdc++.h>
using namespace std;

string longestDiverseString(int a, int b, int c) {
    string res = "";
    int A = 0;
    int B = 0;
    int C = 0;
    while(1){
        if((a>=b&&a>=c&&A<2&&a>0)||(B==2&&a>0)||(C==2&&a>0)){
            res+='a';
            a--;
            A++;
            B=0;
            C=0;
        }
        else if((b>=a&&b>=c&&B<2&&b>0)||(A==2&&b>0)||(C==2&&b>0)){
            res+='b';
            b--;
            B++;
            A=0;
            C=0;
        }
        else if((c>=a&&c>=b&&C<2&&c>0)||(A==2&&c>0)||(B==2&&c>0)){
            res+='c';
            c--;
            C++;
            A=0;
            B=0;
        }else{
            return res;
        }
    }
    return res;
}


int main(){

    longestDiverseString(7,1,0);

    system("pause");
}
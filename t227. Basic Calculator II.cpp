#include <bits/stdc++.h>
using namespace std;

int calculate(string s) {

    vector<char> op;
    vector<int> num;

    for(int i=0;i<s.size();i++){
        if(s[i]==' ')
            continue;
        if(s[i]>='0'&&s[i]<='9'){
            int temp = 0;
            while(i<s.size()&&s[i]>='0'&&s[i]<='9'){
                int a = s[i]-'0';
                temp = temp*10+a;
                i++;
            }
            int res;
            if(!op.empty()){
                if(op.back()=='*'){
                    res = num.back()*temp;
                    num.pop_back();
                    num.push_back(res);
                    op.pop_back();
                }else if(op.back()=='/'){
                    res = num.back()/temp;
                    num.pop_back();
                    num.push_back(res);
                    op.pop_back();
                }else{
                    num.push_back(temp);
                }
            }else{
                num.push_back(temp);
            }
            i--;
        }else{
            op.push_back(s[i]);
        }
    }        
    int ans = num[0];
    if(!op.empty()){
        int index = 1;
        for(int i=0;i<op.size();i++){
            char oper = op[i];
            
            if(oper=='+'){
                    ans = ans+num[index++];
            }else{
                    ans = ans-num[index++];
            }            
        }
    }
    return ans;
}
int main(){
    //vector<int> v{3,5,9};

    int res = calculate("3/2 ");
    cout<<res<<endl;
    system("pause");
}
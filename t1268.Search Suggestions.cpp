#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
    int n = searchWord.size();
    vector<vector<string>> ans(n,vector<string>());
    
    sort(products.begin(),products.end());
    
    bool flag1 = true;
    for(string str:products){
        flag1 = true;
        for(int i=0;i<str.size();i++){
            if(!flag1||i>=n){
                break;
            }
            if(ans[i].size()>=3){
                //flag1=true;
                continue;
            }
            flag1 = false;
            string sub = str.substr(0,i+1);
            string searSub = searchWord.substr(0,i+1);
            if(sub==searSub){
                ans[i].push_back(str);
                flag1 = true;
            }
        }
    }
    return ans;
}

int main(){
    //"mobile","mouse","moneypot","monitor","mousepad"
    vector<string> sugg;
    sugg.push_back("mobile");
    sugg.push_back("mouse");
    sugg.push_back("moneypot");
    sugg.push_back("monitor");
    sugg.push_back("mousepad");

    string searchWord = "mouse";
    
    suggestedProducts(sugg,searchWord);

     cout<<"hello"<<endl;
	system("pause");
	return 0;
}
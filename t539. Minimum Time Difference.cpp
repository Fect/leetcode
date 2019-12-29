#include <bits/stdc++.h>
using namespace std;


int findMinDifference(vector<string>& timePoints) {
    
    sort(timePoints.begin(),timePoints.end());

    int m = INT_MAX;
    for(int i=0;i<timePoints.size();i++){
        
        string str1 = timePoints[i];
        string str2;
        if(i==timePoints.size()-1){
            str2 = timePoints[0];
        }else{
            str2 = timePoints[i+1];
        }

        int h1 = atoi(str1.substr(0,2).c_str());
        int m1 = atoi(str1.substr(3,2).c_str());

        int h2 = atoi(str2.substr(0,2).c_str());
        int m2 = atoi(str2.substr(3,2).c_str());

        if(h1==h2){
            m = min(max(m2,m1)-min(m2,m1),m);
        }else{
            
            if(h1>h2){
                h2+=24;
            }

            m = min(m,(h2-h1)*60-m1+m2);
            
        }

    }

    return m;
}

int main(){

    vector<string> v;
    v.push_back("12:12");
    v.push_back("12:13");


    int c = findMinDifference(v);
    cout<<c<<endl;

    system("pause");
}
#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2) {

    vector<int> m1(26,0),m2(26,0);
    int n1 = s1.size(),n2=s2.size();
    if(n1>n2){
        return false;
    }
    for(int i=0;i<n1;i++){
        m1[s1[i]-'a']++;
        m2[s2[i]-'a']++;
    } 
            if(m1==m2){
            return true;
        }     
    for(int i=0;i+n1<n2;i++){
        m2[s2[i]-'a']--;
        m2[s2[i+n1]-'a']++;
        if(m1==m2){
            return true;
        }
    }
    return false;
}
int main(){


}
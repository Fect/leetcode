#include <bits/stdc++.h>
using namespace std;

vector<double> sampleStats(vector<int>& count) {
    
    int mind=-1,maxd,most=0,mode,times;
    double times,sumd,media=0;
    for(int i=0;i<count.size();i++){
        if(mind==-1&&count[i]!=0){
            mind = i;
        }
        if(count[i]!=0){
            maxd = i;
        }
        times+=count[i];
        sumd+=count[i]*i*1.0;
        if(count[i]>most){
            most = count[i];
            mode = i;
        }
    }
    int medinx1 = (times+1)/2;
    int medinx2 = (times+2)/2;
    int cur = 0;
    for(int i=0;i<count.size();i++){
        if(cur<medinx1&&cur+count[i]>=medinx1){
            media+=i/2.0; 
        }
        if(cur<medinx2&&cur+count[i]>=medinx2){
            media+=i/2.0; 
        }
    }

    return {double(mind),double(maxd),sumd/times,media,double(mode)};
}
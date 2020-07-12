#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr,int left,int mind,int right,vector<int>& tem){
    int i = left;
    int j = mind+1;
    int t = 0;
    while(i<=mind&&j<=right){
        if(arr[i]<=arr[j]){
            tem[t++] = arr[i++];
        }else{
            tem[t++] = arr[j++];
        }
    }
    while(i<=mind){
        tem[t++] = arr[i++];
    }
    while(j<=right){
        tem[t++] = arr[j++];
    }

    t = 0;
    while(left<=right){
        arr[left++] = tem[t++];
    }

}

void mergeSort(vector<int>& arr,int left,int right,vector<int>& tem){
    if(left<right){
        int mind = (left+right)/2;
        mergeSort(arr,left,mind,tem);
        mergeSort(arr,mind+1,right,tem);
        merge(arr,left,mind,right,tem);
    }
}

void check(int i){
    char* t = (char *)&i;
    if(*t==1){
        cout<<"xiao"<<endl;
    }else{
        cout<<"da"<<endl;
    }
}

int main(){
    /*vector<int> arr{49, 38, 65, 97, 23, 22, 76, 1, 5, 8, 2, 0, -1, 22};
    vector<int> tem(arr.size());
    mergeSort(arr,0,arr.size()-1,tem);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }*/
    int i = 45;
    char* t = (char *)&i;
    if(*t==1){
        cout<<"xiao"<<endl;
    }else{
        cout<<"da"<<endl;
    }

    system("pause");
}
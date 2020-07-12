#include <bits/stdc++.h>
using namespace std;

void swap(vector<int>& array,int i,int j){
    int tem = array[i];
    array[i] = array[j];
    array[j] = tem;
}

void adjest(vector<int>& array,int i,int len){
    int tem = array[i];
    for(int k=i*2+1;k<len;k=k*2+1){
        if(k+1<len&&array[k]<array[k+1]){
            k++;
        }
        if(array[k]>tem){
            array[i] = array[k];
            i = k;
        }else{
            break;
        }
    }
    array[i] = tem;
}

void heapSort(vector<int>& array){
    for(int i=array.size()/2-1;i>=0;i--){   //构造大根堆
        adjest(array,i,array.size());
    }
    for(int i=array.size()-1;i>0;i--){
        swap(array,0,i);
        adjest(array,0,i);
    }
}

int main(){

    vector<int> arr{49, 38, 65, 97, 23, 22, 76, 1, 5, 8, 2, 0, -1, 22};
    heapSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    system("pause");
}
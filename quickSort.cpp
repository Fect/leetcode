#include <bits/stdc++.h>
using namespace std;

int getIndex(vector<int>& array,int low,int high){
    int tem = array[low];
    while(low<high){
        while(low<high&&array[high]>=tem){
            high--;
        }
        array[low] = array[high];
        while(low<high&&array[low]<=tem){
            low++;
        }
        array[high] = array[low];
    }
    array[low] = tem;
    return low;
}

void quick(vector<int>& array,int low,int high){
    if(low<high){
        int index = getIndex(array,low,high);

        quick(array,0,index-1);
        quick(array,index+1,high);
    }
}



int main(){

    vector<int> arr{49, 38, 65, 97, 23, 22, 76, 1, 5, 8, 2, 0, -1, 22};
    quick(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    system("pause");
}
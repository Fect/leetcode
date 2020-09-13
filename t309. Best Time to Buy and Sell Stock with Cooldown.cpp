#include<bits/stdc++.h>
using namespace std;

void ReorderOddEven(vector<int> &array) {
 
      int ji=0;
      for(int i=0;i<array.size();i++){
        if(array[i]%2!=0){
            for(int j=i;j>ji;j--){
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
            ji++;
        }
      }
}

    int main(){
        vector<int> arr;
        int num;
        while(cin>>num){
            arr.push_back(num);
        }
        int length = arr.size();
        //ReorderOddEven(arr);
        for(int i=0;i<length-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<arr[length-1]<<endl;
        system("pause");
        return 0;

    }
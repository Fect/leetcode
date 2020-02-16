#include <bits/stdc++.h>
using namespace std;



int numRescueBoats(vector<int>& people, int limit) {

      sort(people.begin(),people.end());
      int res = 0;
      int left = 0,right = people.size()-1; 
      while(left<=right){
          if(people[left]+people[right]<=limit){
              left++;
          }
          right--;
          res++;
      }
      return res;
}


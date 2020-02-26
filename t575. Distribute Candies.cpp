#include <bits/stdc++.h>
using namespace std;

int distributeCandies(vector<int>& candies) {
    
    unordered_set<int> set;
    for(int i=0;i<candies.size();i++){
        set.insert(candies[i]);
    }
    return min(set.size(),candies.size()/2);
}
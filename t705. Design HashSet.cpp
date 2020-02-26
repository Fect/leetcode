#include <bits/stdc++.h>
using namespace std;

class MyHashSet {
private:
    vector<bool> used;

public:
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(key>=used.size()){
            for(int i=used.size();i<=key;i++){
                used.push_back(false);
            }
        }
        used[key] = true;
    }
    
    void remove(int key) {
        if(key>=used.size()){
            return;
        }
        used[key] = false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        if(key>=used.size()||used[key]==false){
            return false;
        }
        return true;
    }
};
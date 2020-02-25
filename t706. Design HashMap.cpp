#include <bits/stdc++.h>
using namespace std;

class MyHashMap {
    private:
        vector<int> myMap;

public:
    /** Initialize your data structure here. */
    MyHashMap() {

    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        if(key>myMap.size()){
            for(int i=myMap.size();i<=key;i++){
                myMap.push_back(-1);
            }
        }
        myMap[key] = value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        if(key>myMap.size()){
            return -1;
        }
        return myMap[key];
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        if(key>myMap.size()){
            return;
        }
        myMap[key] = -1;
    }
};
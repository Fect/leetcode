#include <bits/stdc++.h>
using namespace std;

class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};

int getImportance(vector<Employee*> employees, int id) {
    int res = 0;
    //deque<int> dd;
    
    for(int j=0;j<employees.size();j++){
        if(employees[j]->id==id){
            res+=employees[j]->importance;
            for(int i=0;i<employees[j]->subordinates.size();i++){
                res+=getImportance(employees,employees[j]->subordinates[i]);
            }
            break;
        }
    }
    
    return res;
}
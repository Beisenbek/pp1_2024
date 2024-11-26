#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

int main(){

    vector<student> v;
    int n;
    string name;
    string sname;
    double gpa;
    string id;

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> name >> sname >> gpa >> id;
        student student1(name, sname, gpa, id);
        v.push_back(student1);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; ++i){
        v[i].print();
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

struct student{
    string name;
    string sname;
    double gpa;
    string id;
    student(string name, string sname, double gpa, string id){
        this->name = name;
        this->sname = sname;
        this->gpa = gpa;
        this->id = id;
    }
    void print(){
        cout << this->name << " " << this->sname << " " << this->gpa << " " << this->id << endl;
    }
};



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

    for(int i = 0; i < n; ++i){
        v[i].print();
    }
    

    return 0;
}

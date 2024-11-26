#include <iostream>

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

    string name;
    string sname;
    double gpa;
    string id;

    cin >> name >> sname >> gpa >> id;
    
    student student1(name, sname, gpa, id);

    student1.print();

    return 0;
}

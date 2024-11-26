#include <iostream>

using namespace std;

struct student{
    string name;
    string sname;
    double gpa;
    string id;
    void print(){
        cout << name << " " << sname << " " << gpa << " " << id << endl;
    }
    void doIt(){
        cout << "did it!";
    }
};



int main(){

    student student1;
    student1.name = "AN";
    student1.sname = "AS";
    student1.gpa = 2.4;
    student1.id = "09FSXX019";

    student1.print();
    student1.doIt();

    return 0;
}
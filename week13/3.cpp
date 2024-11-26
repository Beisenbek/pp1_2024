#include <iostream>

using namespace std;

struct student{
    string _name;
    string _sname;
    double _gpa;
    string _id;
    student(string name, string sname, double gpa, string id){
        _name = name;
        _sname = sname;
        _gpa = gpa;
        _id = id;
    }
    void print(){
        cout << _name << " " << _sname << " " << _gpa << " " << _id << endl;
    }
};



int main(){

    student student1("A", "A", 3.4, "AID");

    student1.print();

    return 0;
}

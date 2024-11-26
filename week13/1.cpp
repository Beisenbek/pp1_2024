#include <iostream>

using namespace std;

struct student{
    string name;
    string sname;
    double gpa;
    string id;
};

void print(student x){
    cout << x.name << " " << x.sname << " " << x.gpa << " " << x.id << endl;
}


int main(){

    student student1;
    student1.name = "AN";
    student1.sname = "AS";
    student1.gpa = 2.4;
    student1.id = "09FSXX019";

    print(student1);

    return 0;
}
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

    bool operator < (student other){
        if(this->gpa < other.gpa) return true;
        return false;
    }
};
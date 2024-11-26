using namespace std;

struct circle{
    static double my_pi; 
    double r;
    circle(double r){
        this->r = r;
    }
    double get_area(){
        return my_pi * r * r;
    }
    circle operator +(const circle & other){
        circle result(this->r + other.r);
        return result;
    }
};
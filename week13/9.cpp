#include <iostream>
#include <vector>
#include <algorithm>
#include "circle.h"

using namespace std;

double circle::my_pi = 3.14;

int main(){

    circle c1(3);
    circle c2(4);
    cout << c1.get_area() << endl;
    cout << c2.get_area() << endl;

    circle c3 = c1 + c2;
    cout << c3.get_area() << endl;


    return 0;
}

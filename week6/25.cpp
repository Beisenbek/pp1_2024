#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

int main(){

    stringstream ss;
    string s;
    cin >> s;
    ss << s;

    int n;
    ss >> n;

    cout << sqrt(n);
    
    return 0;
}
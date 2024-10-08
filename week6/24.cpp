#include <iostream>
#include <sstream>
using namespace std;

int main(){

    stringstream ss;

    ss << "test " << 123 << 'a';

    string s;
    int n;
    char c;

    ss >> s;
    ss >> n;
    ss >> c;

    cout << n;
    
    return 0;
}
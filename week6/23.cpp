#include <iostream>
#include <sstream>
using namespace std;

int main(){

    stringstream ss;

    ss << "test " << 123 << 'a';

    cout << ss.str();

    return 0;
}
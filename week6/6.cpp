#include <iostream>

using namespace std;

int main(){

    string s = "123";
    string t = s;
    s = s + '!';
    cout << t << endl;
    return 0;
}
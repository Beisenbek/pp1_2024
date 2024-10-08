#include <iostream>

using namespace std;

int main(){

    string s = "123";
    string t = s;
    string z = "123";

    if(s == t && t == z && s == z) cout << "YES";
    else cout << "NO";
    return 0;
}
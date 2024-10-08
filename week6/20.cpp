#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    string s;
    getline(cin, s);
    
    sort(s.rbegin(), s.rend());

    cout << s;

    return 0;
}
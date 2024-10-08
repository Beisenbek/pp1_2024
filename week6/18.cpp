#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string s;
    getline(cin, s);
    string t;
    cin >> t;
    size_t pos = s.find(t);
    int cnt = 0;

    while(pos != string::npos){
           cnt++;
           pos = s.find(t, pos + 1);
    }

    cout << cnt;

    return 0;
}
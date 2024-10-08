#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string s;
    cin >> s;
    string t;
    cin >> t;

    if(s.find(t) != string::npos){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
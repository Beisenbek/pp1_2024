#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;
    bool f = true;
    for(int i = 0; i < 3; ++i){
        if(s[i] != s[3-i]){
            f = false;
            break;
        }
    }
    if(f == true) 
        cout << "YES";
    else    
        cout << "NO";
    return 0;
}
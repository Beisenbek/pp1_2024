#include <iostream>

using namespace std;

int main(){

    string s = "test";
    char c[s.size];
    for(int i = 0; i < s.size(); ++i){
        c[i] = s[i];
    }
    cout << c;
    return 0;
}
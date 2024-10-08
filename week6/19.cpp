#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string s;
    getline(cin, s);
    string t;
    cin >> t;
    int cnt = 0;


    for(size_t i = 0; i <= s.size() - t.size(); ++i){
        bool found = true;
        for(size_t j = 0; j < t.size(); ++j){
            if(s[i + j] != t[j]){
                found = false;
                break;    
            }
        }
        if(found) 
            cnt++;
    }

    cout << cnt;

    return 0;
}
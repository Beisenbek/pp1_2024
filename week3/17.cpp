#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    string res = "";
    for(int i = 1; i <= 8; ++i){
        if(n % 2 == 0)
            res = '0' + res;
        else    
            res = '1' + res;
        n = n / 2;
    }
    int k = 0;
    int t = 128;
    for(int i = 0; i <= 7; ++i){
        if(res[i] == '0')
            k = k + t; 
        t = t / 2;
    }
    cout << k;
    return 0;
}
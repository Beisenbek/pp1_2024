#include <iostream>

using namespace std;

int main(){

    int n;
    int m = 0;
    cin >> n;
    int n2 = n;

    while(n2 > 0){
        m = m * 10 + n2 % 10;
        n2 = n2 / 10;
    }

    cout << ((n == m)?"YES":"NO");

    return 0;
}
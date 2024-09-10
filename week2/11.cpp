#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    if(x % 2 == 0 && x % 4 == 0)
        cout << "super!";
    else
        cout << "not super";

    return 0;
}
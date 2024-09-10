#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    if(x % 2 == 0){
        cout << "even!";
        x += 10;
    }
    else{
        cout << "odd!";
        x += 100;
    }

    cout << x;

    return 0;
}
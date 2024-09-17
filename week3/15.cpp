#include <iostream>

using namespace std;

int main(){

    string password;
    cout << "enter correct password: " << endl;
    cin >> password;

    while(password != "123"){
       cout << "enter correct password: " << endl;
       cin >> password;
    }

    return 0;
}
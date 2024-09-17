#include <iostream>

using namespace std;

int main(){

    string password;
    
    do{
       cout << "enter correct password: " << endl;
       cin >> password;
    }while(password != "123");

    return 0;
}
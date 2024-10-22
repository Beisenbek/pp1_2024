#include <iostream>

using namespace std;

void apb(int a, int b){
    int c = a + b;
    cout << c;
}

int main(){

    int a, b;
    cin >> a >> b;
    apb(a, b);

    return 0;
}
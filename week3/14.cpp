#include <iostream>

using namespace std;

int main(){

    int i = 0;

    while(i++ <= 100){
        if(i % 2 == 1) continue;
        cout << i << " ";
    }

    return 0;
}
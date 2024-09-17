#include <iostream>

using namespace std;

int main(){

    int i = 0;

    for(;;){
        cout << i << " ";
        cout << 2 * i << endl;
        if(i >= 100) break;
        i = i + 1;
    }

    return 0;
}
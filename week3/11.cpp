#include <iostream>

using namespace std;

int main(){

    int i = 0;

    for(;;){
        i += 1;
        if(i > 100) break;
        if(i % 2 == 1) continue;
        cout << i << " ";
    }

    return 0;
}
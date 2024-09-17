#include <iostream>

using namespace std;

int main(){

    int i = 0;

    for(;; i = i + 1){
        cout << i << " ";
        cout << 2 * i << endl;
        if(i >= 100) break;
    }

    return 0;
}
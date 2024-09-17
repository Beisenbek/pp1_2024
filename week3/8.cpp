#include <iostream>

using namespace std;

int main(){


    int i = 1;
    int j = 1;
    int x = ++i;
    int y = j++;

    cout << x << " " << y << endl;
    cout << i << " " << j << endl;

    return 0;
}
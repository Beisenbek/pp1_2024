#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int f(int n){
    if(n == 1) return 1;
    return f(n-1) + n;
}

int main(){

    int x;
    cin >> x;

    cout << f(x);


    return 0;
}

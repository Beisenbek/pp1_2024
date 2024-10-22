#include <iostream>

using namespace std;

void print(int a[], int n){
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
}

int main(){

    int a[5];
    for(int i = 0; i < 5; ++i){
        cin >> a[i];
    }
    print(a, 5);


    return 0;
}
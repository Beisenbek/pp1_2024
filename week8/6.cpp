#include <iostream>

using namespace std;

void read(int a[], int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}

void print(int a[], int n){
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
}

int main(){

    int n;
    cin >> n;
    int a[n];
    read(a, n);
    print(a, n);
    return 0;
}
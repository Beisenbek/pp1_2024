#include <iostream>

using namespace std;

int f1(int a, int b);
void f2(int c);
void f3();

int main(){
    f3();
    return 0;
}

void f3(){
    f2(f1(2,3));
}

int f1(int a, int b){
    return a + b;
}

void f2(int c){
    cout << c;
}

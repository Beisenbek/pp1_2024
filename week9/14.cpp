#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int, int> m;
    m[0] = 12;
    m[1] = 14;

    for(int i = 0; i < 2; ++i){
        cout << m[i] << " ";
    }
   
    return 0;
}
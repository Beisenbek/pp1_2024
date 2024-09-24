#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int x;
    cin >> x;
    int cnt = 0;

    for(int i = 1; i <= x; ++i){
        if(x % i == 0) cnt++;
    }

    if(cnt == 2)
        cout <<"Yes";
    else
        cout << "No";
    return 0;
}
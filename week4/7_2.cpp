#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime[1000001];

int main(){


    for(int i = 2; i <= 1000000; ++i){
        isPrime[i] = true;
    }

    isPrime[0] = isPrime[1] = false;


    for(int i = 2; i * i <= 1000000; ++i){
        int cur = i;
        if(isPrime[cur]){
            while(cur <= 1000000){
                cur += i;
                isPrime[cur] = false;
            }
        }
    }


    int x;
    cin >> x;

    if(isPrime[x])
        cout <<"Yes";
    else
        cout << "No";

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    char a[n][2 * n - 1];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 2 * n  - 1; ++j){
            if(j >=  n - 1 - i && j < n + i)
                a[i][j] = '*';
            else
                a[i][j] = '.';
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 2 * n - 1; ++j){
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
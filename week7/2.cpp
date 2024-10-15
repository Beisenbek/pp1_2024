#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int m = n * (2 * n - 1);
    char a[n][m];

    /*
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            a[i][j] = '-';
        }
    }
    */  
    for(int t = 0; t < n; ++t){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < 2 * n  - 1; ++j){
                if(j >=  n - 1 - i && j < n + i)
                    a[i][j + t * (2 * n - 1)] = '*';
                else
                    a[i][j + t * (2 * n - 1)] = ' ';
            }
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
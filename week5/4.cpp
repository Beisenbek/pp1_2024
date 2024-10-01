#include <iostream>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(i == j) a[i][j] = 2;
            else if(i + j == n - 1) a[i][j] = 3;
            else a[i][j] = 1;
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
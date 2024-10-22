#include <iostream>

using namespace std;

int a[1000][1000];

void read(int n, int m){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
}

void print(int n, int m){
     for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    int n, m;
    cin >> n >> m;
    read(n, m);
    print(n, m);
    return 0;
}
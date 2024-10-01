#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n][m];

    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    int minValue = INT_MAX;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            minValue = min(minValue, a[i][j]);
        }
    }

    cout << minValue;


    return 0;
}
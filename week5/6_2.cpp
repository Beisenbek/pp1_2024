#include <iostream>
#include <algorithm>
#include <climits>
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

    bool isMax = true;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(isMax){
                int maxValue = INT_MIN;
                int posR = 0;
                int posC = 0;
                for(int k = 0; k < n; ++k){
                    for(int l = 0; l < m; ++l){
                       if(a[k][l] != -1 && maxValue < a[k][l]){
                            maxValue = a[k][l];
                            posR = k;
                            posC = l;
                       }
                    }
                }
                cout << maxValue << " ";
                isMax = false;
                a[posR][posC] = -1;
            }else{
                int minValue = INT_MAX;
                int posR = 0;
                int posC = 0;
                for(int k = 0; k < n; ++k){
                    for(int l = 0; l < m; ++l){
                       if(a[k][l] != -1 && minValue > a[k][l]){
                            minValue = a[k][l];
                            posR = k;
                            posC = l;
                       }
                    }
                }
                cout << minValue << " ";
                isMax = true;
                a[posR][posC] = -1;
            }
        }
        cout << endl;
    }

    return 0;
}
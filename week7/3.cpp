#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    
    int steps[2 * n - 1];

    steps[0] = n - 1;

    int i = 1;
    int v = n - 1; 

    while(i < 2 * n - 1){
        steps[i] = v;
        steps[i + 1] = v;
        i += 2;
        v -= 1;
    }

    /*
    int dr[4], dc[4];
    dr[0] = 0; dc[0] = 1;
    dr[1] = 1; dc[1] = 0;
    dr[2] = 0; dc[2] = -1;
    dr[3] = -1;dc[3] = 0;
    */
    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};    

    int m[n][n];

    int curR = 0;
    int curC = 0;
    int cnt = 1;
    int k = 0;
    m[curR][curC] = cnt;

    for(int i = 0; i < 2 * n - 1; ++i){
        for(int j = 0; j < steps[i]; ++j){
            curR += dr[k];
            curC += dc[k];
            m[curR][curC] = ++cnt;
        }
        k = (k + 1) % 4;
    }

    for(int i = 0;  i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
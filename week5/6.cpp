#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n * m];

    for(int i = 0; i < n * m; ++i){
        cin >> a[i];
    }

    sort(a, a + n * m);

    int cnt = 0;

    for(int i = 0; i <= (n * m) / 2; ++i){
        if((i == (n * m) /2 && (n * m) % 2 == 1) || i < (n * m) /2){
            cout << a[n * m - 1 - i] << " ";
            cnt = cnt + 1;
            if(cnt % m == 0) cout << endl;
            if(((n * m ) % 2 == 0) || ((n * m ) % 2 != 0 && i < (n * m)/2 )){
                cout << a[i] << " ";
                cnt = cnt + 1;
                if(cnt % m == 0) cout << endl;
            }
        }
    }

    return 0;
}
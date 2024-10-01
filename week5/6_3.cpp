#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    int k = n * m;

    int a[k];
    int p[100];

    for(int i = 0; i < k; ++i){
        cin >> a[i];
    }

    sort(a, a + k);

    int j = 0;

    for(int i = 0; i < k; i += 2){
        p[i] = a[k - 1 - j]; 
        j++;
    }

    j = 0;

    for(int i = 1; i < k; i += 2){
        p[i] = a[j]; 
        j++;
    }

    for(int i = 0; i < k; ++i){
        cout << p[i] << " ";
        if((i + 1 ) % m == 0) cout << endl;
    }



    return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    int x, y;
    pair<int, int> a[n];

    for(int i = 0; i < n; ++i){
        cin >> x >> y;
        a[i] = make_pair(x, y);
    }

    sort(a, a + n);

    for(int i = 0; i < n; ++i){
        cout << a[i].first << " " << a[i].second << endl;
    }

    return 0;
}
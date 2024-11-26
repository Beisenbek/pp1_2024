#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void x2(const vector<int> &v){
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v;
    int n;
    cin >> n;
    int x;
    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    x2(v);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

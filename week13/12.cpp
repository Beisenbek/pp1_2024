#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void x2(vector<int> v){
    for(int i = 0; i < v.size(); ++i){
        v[i] *= 2;
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    x2(v);


    return 0;
}

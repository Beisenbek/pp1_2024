#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    vector<int> v(10,1);
    v.insert(v.begin() + 1,4, 2);

    cout << v.size() << endl;
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}
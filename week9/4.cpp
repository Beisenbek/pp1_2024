#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> v(5);

    v[0] = 0;
    cout << v.size() << endl;
    cout << v[0] << endl;

    return 0;
}
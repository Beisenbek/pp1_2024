#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> v;

    cout << v.size() << endl;
    int x;
    cin >> x;
    v.push_back(x);
    cout << v.size() << endl;

    return 0;
}
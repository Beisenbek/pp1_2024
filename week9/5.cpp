#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> v;
    int x;
    while(cin >> x){
        v.push_back(x);
    }
    cout << v.size();

    return 0;
}
#include <iostream>
#include <map>
#include <vector>

using namespace std;


int main(){

    map<string, int> m;
    vector<string> v;
    string name;
    int count;

    while(cin >> name >> count){
        if(m[name] == 0){
           v.push_back(name);
        }
        m[name] += count;
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " " << m[v[i]] << endl;
    }
    return 0;
}
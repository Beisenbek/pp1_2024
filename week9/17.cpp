#include <iostream>
#include <map>
#include <vector>
#include <set>

using namespace std;


int main(){

    map<string, int> m;
    vector<string> v;
    set<string> s;
    string name;
    int count;

    while(cin >> name >> count){
        m[name] += count;
        if(s.find(name) == s.end()){
           v.push_back(name);
           s.insert(name);
        }
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " " << m[v[i]] << endl;
    }
    return 0;
}
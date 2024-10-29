#include <iostream>
#include <map>
#include <vector>

using namespace std;

bool find(vector<string> v, string name){
    for(int i = 0; i < v.size(); ++i){
        if(v[i] == name) return true;
    }
    return false;
}

int main(){

    map<string, int> m;
    vector<string> v;
    string name;
    int count;

    while(cin >> name >> count){
        m[name] += count;
        if(!find(v, name)){
           v.push_back(name);
        }
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " " << m[v[i]] << endl;
    }
    return 0;
}
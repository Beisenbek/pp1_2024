#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, string> m;

    pair<string, string> p1;
    p1 = make_pair("apple","yabloko");

    m.insert(p1);
    m.insert(make_pair("orange","apelsin"));
    m.insert(make_pair("apple","alma"));

    map<string, string> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }


   
    return 0;
}
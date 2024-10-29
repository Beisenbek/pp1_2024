#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, string> m;
    m["orange"] = "apelsin";

    m["apple"] = "yabloko";
    m["apple"] = "alma";

    map<string, string> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }


   
    return 0;
}
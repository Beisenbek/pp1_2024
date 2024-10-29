#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> s;

    s.insert(10);
    s.insert(1);
    s.insert(7);
    s.insert(7);
    s.insert(9);


    cout << s.size() << endl;
    
    set<int> :: iterator it;

    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " " <<endl;
    }    
   
    return 0;
}
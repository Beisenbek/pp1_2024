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
    
    set<int> :: reverse_iterator it;

    for(it = s.rbegin(); it != s.rend(); ++it){
        cout << *it << " " <<endl;
    }    
   
    return 0;
}
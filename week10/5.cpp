#include <iostream>
#include <set>

using namespace std;

int main(){

    set<string> q2;


    q2.insert("abcd");
    q2.insert("zyzx");
    q2.insert("qfty");
    q2.insert("aaaa");
    q2.insert("bbbb");

    for(set<string> :: reverse_iterator it = q2.rbegin(); it != q2.rend(); ++it){
        cout << *it << " ";
    }


    return 0;
}
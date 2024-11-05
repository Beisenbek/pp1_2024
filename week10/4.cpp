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

    while(!q2.empty()){
        cout << *q2.begin() << " ";
        q2.erase(q2.begin());
    }


    return 0;
}
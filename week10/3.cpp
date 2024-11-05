#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> q2;


    q2.insert(12);
    q2.insert(122);
    q2.insert(412);
    q2.insert(162);
    q2.insert(712);

    while(!q2.empty()){
        cout << *q2.begin() << " ";
        q2.erase(q2.begin());
    }


    return 0;
}
#include <iostream>
#include <deque>

using namespace std;

int main(){

    deque<int> d1;


    d1.push_back(12);
    d1.push_back(122);
    d1.push_back(412);
    d1.push_back(162);
    d1.push_back(712);

    d1.push_front(11112);
    d1.push_front(11122);
    d1.push_front(11412);
    d1.push_front(11162);
    d1.push_front(11712);

    while(!d1.empty()){
        cout << d1.back() << " ";
        d1.pop_back();
    }


    return 0;
}
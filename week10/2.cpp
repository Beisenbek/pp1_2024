#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> s1;


    s1.push(12);
    s1.push(122);
    s1.push(412);
    s1.push(162);
    s1.push(712);

    while(!s1.empty()){
        cout << s1.top() << " ";
        s1.pop();
    }


    return 0;
}
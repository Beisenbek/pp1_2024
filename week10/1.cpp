#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<int> q1;


    q1.push(12);
    q1.push(122);
    q1.push(412);
    q1.push(162);
    q1.push(712);

    while(!q1.empty()){
        cout << q1.front() << " ";
        q1.pop();
    }


    return 0;
}
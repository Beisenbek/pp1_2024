#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    string sname;
    double gpa;
    pair<double, string> a[n];

    for(int i = 0; i < n; ++i){
        cin >> sname >> gpa;
        a[i] = make_pair(gpa, sname);
    }

    sort(a, a + n);

    for(int i =n - 1; i >=0; --i){
        cout << a[i].second << " " << a[i].first << endl;
    }

    return 0;
}
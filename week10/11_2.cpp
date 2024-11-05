#include <iostream>
#include <algorithm>

using namespace std;

bool f( pair<string, double> p1,  pair<string, double>  p2){
    if(p1.second < p2.second) return false;
    return true;
}

int main(){

    int n;
    cin >> n;
    string sname;
    double gpa;
    pair<string, double> a[n];

    for(int i = 0; i < n; ++i){
        cin >> sname >> gpa;
        a[i] = make_pair(sname, gpa);
    }

    sort(a, a + n, f);

    for(int i = 0; i < n; ++i){
        cout << a[i].first << " " << a[i].second << endl;
    }

    return 0;
}
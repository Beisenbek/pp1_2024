#include <iostream>
#include <algorithm>

using namespace std;

bool is_vowel(char c){
    bool condition1 = (c == 'a' || c == 'A');
    bool condition2 = (c == 'e' || c == 'E');
    bool condition3 = (c == 'i' || c == 'I');
    bool condition4 = (c == 'o' || c == 'O');
    bool condition5 = (c == 'u' || c == 'U');
    return condition1 || condition2 || condition3 || condition4 || condition4 || condition5;
}

int vowels_count(string s){
    int cnt = 0;
    for(size_t i = 0; i < s.size(); ++i){
        if(is_vowel(s[i])) cnt++;
    }
    return cnt;
}

bool f(pair<string, double> p1,  pair<string, double>  p2){
    if(vowels_count(p1.first) < vowels_count(p2.first)) return false;
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
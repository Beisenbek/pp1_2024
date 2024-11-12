#include <iostream>
#include <stack>

using namespace std;

int main(){

    string s;
    cin >> s;
    stack<char> st;

    for(size_t i = 0; i < s.size(); ++i){
        if(!st.empty() && st.top() == '(' && s[i] == ')') {
            st.pop();
            continue;
        }
        st.push(s[i]);
    }

    if(!st.empty()){
        cout << "NO";
    }else{
        cout << "YES";
    }

    return 0;
}
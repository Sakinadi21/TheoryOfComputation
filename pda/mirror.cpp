#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isMirror(const string& s) {
    if (s.empty()) return false;
    int n = s.length();
    if (n % 2 != 0) return false;

    stack<char> st;
    for (int i = 0; i < n / 2; i++) st.push(s[i]);
    for (int i = n / 2; i < n; i++) {
        if (st.empty() || s[i] != st.top()) return false;
        st.pop();
    }
    return st.empty();
}

int main() {
    string input;
    cin >> input;
    cout << (isMirror(input) ? "Accepted: wwᵒ" : "Rejected") << endl;
    return 0;
}

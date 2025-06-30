#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isEvenPalindrome(const string& s) {
    if (s.length() % 2 != 0) return false;
    stack<char> st;
    int n = s.length();
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
    cout << (isEvenPalindrome(input) ? "Accepted" : "Rejected") << endl;
    return 0;
}

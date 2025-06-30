#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(const string& s) {
    int n = s.size();
    stack<char> st;

    // Push first half chars
    for (int i = 0; i < n / 2; i++) {
        st.push(s[i]);
    }

    // Start index for second half depends on length parity
    int start = (n % 2 == 0) ? n / 2 : n / 2 + 1;

    // Compare second half with stack top
    for (int i = start; i < n; i++) {
        if (st.empty() || st.top() != s[i]) {
            return false;
        }
        st.pop();
    }

    return st.empty();
}

int main() {
    string s;
    cout << "Enter binary string: ";
    cin >> s;

    if (isPalindrome(s))
        cout << "Palindrome\n";
    else
        cout << "Not palindrome\n";

    return 0;
}

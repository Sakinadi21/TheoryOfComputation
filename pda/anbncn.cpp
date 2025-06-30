#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    stack<char> st;
    int i = 0, n = input.size();

    // Phase 1: push 'a's
    while (i < n && input[i] == 'a') {
        st.push('a');
        i++;
    }

    // There must be at least one 'a'
    if (st.empty()) {
        cout << "Rejected" << endl;
        return 0;
    }

    // Phase 2: match 'b's with 'a's by popping 'a' and pushing 'b'
    while (i < n && input[i] == 'b') {
        if (st.empty() || st.top() != 'a') {
            cout << "Rejected" << endl;
            return 0;
        }
        st.pop();
        st.push('b');
        i++;
    }

    // There must be at least one 'b' (stack should contain at least one 'b')
    if (st.empty() || st.top() != 'b') {
        cout << "Rejected" << endl;
        return 0;
    }

    // Phase 3: match 'c's with 'b's
    while (i < n && input[i] == 'c') {
        if (st.empty() || st.top() != 'b') {
            cout << "Rejected" << endl;
            return 0;
        }
        st.pop();
        i++;
    }

    // Accept if stack empty and input fully consumed
    if (i == n && st.empty())
        cout << "Accepted: aⁿbⁿcⁿ" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

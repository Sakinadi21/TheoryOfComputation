#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(const string& s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(') st.push('(');
        else if (c == ')') {
            if (st.empty()) return false;
            st.pop();
        } else return false; // invalid character
    }
    return st.empty();
}

int main() {
    string input;
    cin >> input;
    cout << (isBalanced(input) ? "Accepted: balanced parentheses" : "Rejected") << endl;
    return 0;
}

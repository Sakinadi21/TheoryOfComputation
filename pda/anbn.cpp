#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    stack<char> st;
    int i = 0;
    int n = input.length();

    // Push 'a's onto stack
    while (i < n && input[i] == 'a') {
        st.push('a');
        i++;
    }

    // At least one 'a' needed
    if (st.empty()) {
        cout << "Rejected" << endl;
        return 0;
    }

    // Match 'b's with 'a's from stack
    while (i < n && input[i] == 'b') {
        if (st.empty()) {
            cout << "Rejected" << endl;
            return 0;
        }
        st.pop();
        i++;
    }

    // Accept if stack is empty and input fully processed
    if (st.empty() && i == n)
        cout << "Accepted: string is a^n b^n" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

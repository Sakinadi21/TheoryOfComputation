#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isAccepted_aNb2N(const string& input) {
    stack<char> st;
    int i = 0;
    int n = input.length();

    // Step 1: Push for each 'a'
    while (i < n && input[i] == 'a') {
        st.push('A'); // Push symbol for each 'a'
        i++;
    }

    // Step 2: For every 2 'b's, pop 1 'A'
    while (i < n) {
        if (input[i] != 'b') return false;
        int bCount = 0;

        // Consume exactly 2 b's at a time
        while (i < n && bCount < 2 && input[i] == 'b') {
            bCount++;
            i++;
        }

        if (bCount != 2 || st.empty()) return false; // Invalid pair or no 'a' to match
        st.pop(); // Match 2 b's with 1 a
    }

    return st.empty(); // Accept if stack is empty
}

int main() {
    string input;
   
    cin >> input;

    if (isAccepted_aNb2N(input))
        cout << "Accepted: Matches aⁿb²ⁿ\n";
    else
        cout << "Rejected\n";

    return 0;
}

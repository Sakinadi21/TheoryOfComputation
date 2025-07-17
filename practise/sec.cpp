#include <iostream>
#include <string>
using namespace std;

bool secondSymbolA(const string& s) {
    if (s.size() < 2) return false; // Check if the string has at least 2 characters
    return s[1] == 'a'; // Check if the second character is 'a'
}

int main() {
    string input;
    cin >> input; // Read input string

    if (secondSymbolA(input))
        cout << "Accepted: second symbol is 'a'" << endl; // If the second character is 'a'
    else
        cout << "Rejected" << endl; // If the second character is not 'a'

    return 0;
}
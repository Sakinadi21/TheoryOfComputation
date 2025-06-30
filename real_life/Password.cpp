#include <iostream>
#include <string>
using namespace std;

bool containsDigitOrUpper(const string& s) {
    bool hasDigit = false, hasUpper = false;
    for (char c : s) {
        if (isdigit(c)) hasDigit = true;
        if (isupper(c)) hasUpper = true;
    }
    return hasDigit || hasUpper;
}

int main() {
    string password;
    cin >> password;

    if (containsDigitOrUpper(password))
        cout << "Password Accepted\n";
    else
        cout << "Password Rejected\n";

    return 0;
}

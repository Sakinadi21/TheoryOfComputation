#include <iostream>
#include <string>
using namespace std;

bool isValidPassword(const string& s) {
    bool hasUpper = false, hasDigit = false, hasSpecial = false;

    string special = "!@#$%";

    for (char c : s) {
        if (isupper(c)) hasUpper = true;
        else if (isdigit(c)) hasDigit = true;
        else if (special.find(c) != string::npos) hasSpecial = true;
    }

    return hasUpper && hasDigit && hasSpecial;
}

int main() {
    string pwd;
     
    cin >> pwd;

    if (isValidPassword(pwd))
        cout << "Valid password\n";
    else
        cout << "Invalid password\n";

    return 0;
}

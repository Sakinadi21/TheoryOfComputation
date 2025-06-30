#include <iostream>
#include <string>
using namespace std;
bool isBinaryDivisibleBy2(const string& s) {
    if (s.empty()) return false;
    for (char c : s) {
        if (c != '0' && c != '1') return false;
    }
    return s.back() == '0';
}



int main() {
    string input;
    cin >> input;

    if (isBinaryDivisibleBy2(input))
        cout << "Accepted: string is a binary number and is divisible by 2" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}



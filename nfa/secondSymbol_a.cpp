#include <iostream>
#include <string>
using namespace std;
bool secondSymbolA(const string& s) {
    if (s.size() < 2) return false;
    return s[1] == 'a';
}



int main() {
    string input;
    cin >> input;

    if (secondSymbolA(input))
        cout << "Accepted: second symbol is 'a'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}


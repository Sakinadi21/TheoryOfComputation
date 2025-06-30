#include <iostream>
#include <string>
using namespace std;
// Same as 9, just verify alphabet
bool secondSymbolAOverAB(const string& s) {
    if (s.size() < 2) return false;
    if (s[0] != 'a' && s[0] != 'b') return false;
    if (s[1] != 'a' && s[1] != 'b') return false;
    return s[1] == 'a';
}




int main() {
    string input;
    cin >> input;

    if (secondSymbolAOverAB(input))
        cout << "Accepted: second symbol is 'a'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}


    
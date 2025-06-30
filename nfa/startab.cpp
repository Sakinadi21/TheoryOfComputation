#include <iostream>
#include <string>
using namespace std;
bool startsWithAB(const string& s) {
    if (s.size() < 2) return false;
    return s[0] == 'a' && s[1] == 'b';
}


int main() {
    string input;
    cin >> input;

    if (startsWithAB(input))
        cout << "Accepted: string starts with 'ab'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

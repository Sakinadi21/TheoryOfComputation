#include <iostream>
#include <string>
using namespace std;
bool startsWithA(const string& s) {
    if (s.empty()) return false;
    return s[0] == 'a';
}


int main() {
    string input;
    cin >> input;

    if (startsWithA(input))
        cout << "Accepted: string starts with 'a'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

bool isAccepted(const string& s) {
    // Check length exactly 2
    if (s.length() != 2)
        return false;

    // Check alphabet {a,b}
    for (char c : s) {
        if (c != 'a' && c != 'b')
            return false;
    }

    return true; // all conditions met
}

int main() {
    string input;
    cin >> input;

    if (isAccepted(input))
        cout << "Accepted: string length exactly 2 and over {a,b}" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

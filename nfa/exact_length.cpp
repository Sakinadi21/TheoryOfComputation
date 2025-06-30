#include <iostream>
#include <string>
using namespace std;

bool isAccepted(string s) {
    if (s.length() != 2)
        return false;

    // Alphabet check
    for (char c : s) {
        if (c != 'a' && c != 'b') 
            return false;
    }

    // All length 2 strings over {a,b} are accepted
    return true;
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

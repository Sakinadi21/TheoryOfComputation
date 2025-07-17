
#include <iostream>
#include <string>
using namespace std;
bool isAcceptedLengthDivBy2(const string& s) {
    if (s.length() % 2 != 0) return false;
    for (char c : s) if (c != 'a' && c != 'b') return false;
    return true;
}




int main() {
    string input;
    cin >> input;

    if (isAcceptedLengthDivBy2(input))
        cout << "Accepted: string length divisible by 2 and over {a,b}" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;
bool containsA(const string& s) {
    for (char c : s) if (c == 'a') return true;
    return false;
}

int main() {
    string input;
    cin >> input;

    if (containsA(input))
        cout << "Accepted: string contains 'a'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

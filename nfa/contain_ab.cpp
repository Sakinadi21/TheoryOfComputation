#include <iostream>
#include <string>
using namespace std;
bool containsAB(const string& s) {
    return s.find("ab") != string::npos;
}


int main() {
    string input;
    cin >> input;

    if (containsAB(input))
        cout << "Accepted: string contains 'ab'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}


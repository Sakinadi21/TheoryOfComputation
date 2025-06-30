#include <iostream>
#include <string>
using namespace std;
bool endsWithA(const string& s) {
    if (s.empty()) return false;
    return s.back() == 'a';
}

int main() {
    string input;
    cin >> input;

    if (endsWithA(input))
        cout << "Accepted: string ends with 'a'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

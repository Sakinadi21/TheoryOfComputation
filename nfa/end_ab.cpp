#include <iostream>
#include <string>
using namespace std;
bool endsWithAB(const string& s) {
    if (s.size() < 2) return false;
    return s[s.size()-2] == 'a' && s.back() == 'b';
}


int main() {
    string input;
    cin >> input;

    if (endsWithAB(input))
        cout << "Accepted: string ends with 'ab'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

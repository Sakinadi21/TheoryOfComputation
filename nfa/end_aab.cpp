#include <iostream>
#include <string>
using namespace std;
bool endsWithAAB(const string& s) {
    if (s.size() < 3) return false;
    return s[s.size()-3] == 'a' && s[s.size()-2] == 'a' && s.back() == 'b';
}


int main() {
    string input;
    cin >> input;

    if (endsWithAAB(input))
        cout << "Accepted: string ends with 'aab'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

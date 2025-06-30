#include <iostream>
#include <string>
using namespace std;
bool startWith0AndOddLength(const string& s) {
    if (s.empty()) return false;
    if (s[0] != '0') return false;
    return (s.length() % 2 == 1);
}



int main() {
    string input;
    cin >> input;

    if (startWith0AndOddLength(input))
        cout << "Accepted: string starts with '0' and has odd length" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

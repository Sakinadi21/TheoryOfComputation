#include <iostream>
#include <string>
using namespace std;
bool endsWith001(const string& s) {
    if (s.size() < 3) return false;
    return s[s.size()-3] == '0' && s[s.size()-2] == '0' && s.back() == '1';
}



int main() {
    string input;
    cin >> input;

    if (endsWith001(input))
        cout << "Accepted: string ends with '001'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}


    
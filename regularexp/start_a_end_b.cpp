#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.size() >= 2 && s.front() == 'a' && s.back() == 'b') {
        for (char c : s) {
            if (c != 'a' && c != 'b') { cout << "Rejected\n"; return 0; }
        }
        cout << "Accepted\n";
    } else {
        cout << "Rejected\n";
    }

    return 0;
}

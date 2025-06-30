#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool ok = false;

    if (s.size() == 2 &&
        (s[0] == 'a' || s[0] == 'b') &&
        s[1] == 'c')
        ok = true;

    cout << (ok ? "Accepted" : "Rejected") << endl;
    return 0;
}

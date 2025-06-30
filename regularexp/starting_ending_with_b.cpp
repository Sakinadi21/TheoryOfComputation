#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int state = 0;

    for (char c : s) {
        if (c != 'a' && c != 'b') { state = -1; break; }
        if (state == 0 && c == 'b') state = 1;
        else if (state == 1 && c == 'a') state = 1;
        else if (state == 1 && c == 'b') state = 2;
        else state = -1;
    }

    cout << (state == 2 ? "Accepted" : "Rejected") << endl;
    return 0;
}

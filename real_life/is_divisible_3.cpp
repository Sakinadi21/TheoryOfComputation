#include <iostream>
#include <string>
using namespace std;

bool isDivisibleBy3(const string& s) {
    int state = 0; // remainder mod 3

    for (char c : s) {
        if (c != '0' && c != '1') return false;

        int bit = c - '0';
        state = (state * 2 + bit) % 3;
    }

    return state == 0;
}

int main() {
    string s;
 
    cin >> s;

    if (isDivisibleBy3(s))
        cout << "Divisible by 3\n";
    else
        cout << "Not divisible by 3\n";

    return 0;
}

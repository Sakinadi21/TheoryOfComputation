#include <iostream>
#include <string>
using namespace std;
bool contains11or111(const string& s) {
    return (s.find("11") != string::npos);
    // Since "111" contains "11", just searching "11" is enough.
}



int main() {
    string input;
    cin >> input;

    if (contains11or111(input))
        cout << "Accepted: string contains '11' or '111'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

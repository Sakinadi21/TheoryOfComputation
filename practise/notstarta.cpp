#include <iostream>
#include <string>
using namespace std;
bool notStartWithA(const string& s) {
    if (s.empty()) return false; // Check if the string is empty
    return s[0] != 'a'; // Check if the first character is not 'a'
}
int main(){
    string input;
    cin >> input;

    if (notStartWithA(input))
        cout << "Accepted: string does not start with 'a'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

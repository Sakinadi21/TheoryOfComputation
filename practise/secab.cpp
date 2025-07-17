#include <iostream>
#include <string>
using namespace std;

bool secondSymbolOverAB(const string& s){
    if(s.size() < 2) return false;
    if(s[0] != 'a' && s[0] != 'b') return false;
    if(s[1] != 'a' && s[1] != 'b')  
return false;
    return s[1] == 'a'; // Check if the second character is 'b
}

int main() {
    string input;
    cin >> input; // Read input string

    if (secondSymbolOverAB(input))
        cout << "Accepted: second symbol is 'a'" << endl; // If the second character is 'a'
    else
        cout << "Rejected" << endl; // If the second character is not 'a'

    return 0;
}
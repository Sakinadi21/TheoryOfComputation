#include <iostream>
#include <string>
using namespace std;

bool isAccepted(const string& s){
    if(s.length() != 2) // Check length exactly 2
        return false;

        for (char c:s){
            if(c !='a' && c != 'b') // Check alphabet {a,b}
                return false;
        }
    return true;
}

int main() {
    string input;
    cin >> input;

    if (isAccepted(input))
        cout << "Accepted: string length exactly 2 and over {a,b}" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
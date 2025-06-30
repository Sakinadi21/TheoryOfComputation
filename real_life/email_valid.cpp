#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidEmail(const string& email) {
    enum State {START, USERNAME, AT, DOMAIN, DOT, C, O, M, ACCEPT, REJECT};
    State state = START;

    for (char c : email) {
        switch(state) {
            case START:
                if (isalpha(c)) state = USERNAME;
                else return false;
                break;

            case USERNAME:
                if (isalnum(c)) state = USERNAME;
                else if (c == '@') state = AT;
                else return false;
                break;

            case AT:
                if (isalnum(c)) state = DOMAIN;
                else return false;
                break;

            case DOMAIN:
                if (isalnum(c)) state = DOMAIN;
                else if (c == '.') state = DOT;
                else return false;
                break;

            case DOT:
                if (c == 'c') state = C;
                else return false;
                break;

            case C:
                if (c == 'o') state = O;
                else return false;
                break;

            case O:
                if (c == 'm') state = M;
                else return false;
                break;

            case M:
                // Accept only if string ends here
                return false;

            default:
                return false;
        }
    }
    return state == M;
}

int main() {
    string email;
    // cout << "Enter email: ";
    cin >> email;

    if (isValidEmail(email))
        cout << "Valid email\n";
    else
        cout << "Invalid email\n";

    return 0;
}

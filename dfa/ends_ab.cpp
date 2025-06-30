#include <iostream>
#include <string>
using namespace std;

// DFA: accepts strings over {a,b} that end with "ab"
class DFA {
private:
    int state;
    bool invalid;
public:
    DFA() : state(0), invalid(false) {}

    void process(char c) {
        if (c != 'a' && c != 'b') {
            invalid = true;
            return;
        }

        switch(state) {
            case 0:
                if (c == 'a') state = 1;
                else if (c == 'b') state = 0;
                break;
            case 1:
                if (c == 'a') state = 1;
                else if (c == 'b') state = 2;
                break;
            case 2:
                if (c == 'a') state = 1;
                else if (c == 'b') state = 0;
                break;
        }
    }

    bool isAccepted() const {
        return state == 2 && !invalid;
    }
};

int main() {
    string input;
    cin >> input;

    DFA dfa;
    for (char c : input) {
        dfa.process(c);
    }

    if (dfa.isAccepted())
        cout << "Accepted: ends with 'ab' and only 'a' or 'b'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

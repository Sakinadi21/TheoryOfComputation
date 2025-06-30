#include <iostream>
#include <string>
using namespace std;

// DFA: accepts strings starting with "10" over {0,1}
class DFA {
private:
    int state;
public:
    DFA() : state(0) {}

    void process(char c) {
        switch(state) {
            case 0:
                if (c == '1')
                    state = 1;
                else
                    state = -1;
                break;
            case 1:
                if (c == '0')
                    state = 2; // accept state
                else
                    state = -1;
                break;
            case 2:
                if (c == '0' || c == '1')
                    state = 2; // stay accepted
                else
                    state = -1;
                break;
            default:
                break;
        }
    }

    bool isAccepted() const { return state == 2; }
    bool isRejected() const { return state == -1; }
};

int main() {
    string input;
    cin >> input;

    DFA dfa;
    for (char c : input) {
        dfa.process(c);
        if (dfa.isRejected())
            break;
    }

    if (dfa.isAccepted())
        cout << "Accepted: starts with '10'" << endl;
    else
        cout << "Rejected: does not start with '10'" << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// DFA class: accepts strings over {a,b} that start with "aa"
class DFA {
private:
    int state; // current state
public:
    DFA() : state(0) {}

    void process(char c) {
        switch(state) {
            case 0:
                if (c == 'a')
                    state = 1;  // first 'a' found
                else
                    state = -1; // first char not 'a', reject
                break;
            case 1:
                if (c == 'a')
                    state = 2;  // second 'a' found, now accepted
                else
                    state = -1; // second char not 'a', reject
                break;
            case 2:
                if (c == 'a' || c == 'b')
                    state = 2; // stay accepted on a or b
                else
                    state = -1; // invalid symbol, reject
                break;
            default:
                // stay rejected
                break;
        }
    }

    bool isAccepted() const {
        return state == 2;
    }

    bool isRejected() const {
        return state == -1;
    }
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
        cout << "Accepted: starts with 'aa'" << endl;
    else
        cout << "Rejected: does not start with 'aa'" << endl;

    return 0;
}

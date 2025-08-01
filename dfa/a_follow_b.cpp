#include <iostream>
#include <string>
using namespace std;

class DFA {
private:
    int state; // 0: normal, 1: saw 'a' waiting for 'b', -1: reject

public:
    DFA() : state(0) {}

    void process(char c) {
        if (c != 'a' && c != 'b') {
            state = -1; // invalid input
            return;
        }

        if (state == -1) return; // already rejected

        if (state == 0) {
            if (c == 'a')
                state = 1; // saw 'a', expect 'b' next
            // else c == 'b', stay in state 0
        } else if (state == 1) {
            if (c == 'b')
                state = 0; // matched 'a' with 'b'
            else
                state = -1; // 'a' not followed by 'b', reject
        }
    }

    bool isAccepted() const {
        return state == 0;
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
        if (dfa.isRejected()) {
            break;  // reject early if invalid
        }
    }

    if (dfa.isAccepted())
        cout << "Accepted: every 'a' is followed by 'b'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

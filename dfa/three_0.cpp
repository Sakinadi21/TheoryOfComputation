#include <iostream>
#include <string>
using namespace std;

class DFA {
private:
    int state; // number of 0's seen (0..3), 3 is accepting and final

public:
    DFA() : state(0) {}

    void process(char c) {
        if (c != '0' && c != '1') {
            state = -1; // invalid input
            return;
        }

        if (state == -1) return;

        if (c == '0') {
            if (state < 3) state++;
            // stay in state 3 if already reached 3 or more 0's
        }
        // if c == '1', stay in current state
    }

    bool isAccepted() const {
        return state == 3;
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
        cout << "Accepted: at least three 0's" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

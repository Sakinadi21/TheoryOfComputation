#include <iostream>
#include <string>
using namespace std;

// DFA class: accepts strings over {a,b} that start with "aab"
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
                    state = -1; // reject
                break;
            case 1:
                if (c == 'a')
                    state = 2;  // second 'a' found
                else
                    state = -1; // reject
                break;
            case 2:
                if (c == 'b')
                    state = 3;  // 'aab' prefix complete, accept state
                else
                    state = -1; // reject
                break;
            case 3:
                if (c == 'a' || c == 'b')
                    state = 3;  // remain in accept state
                else
                    state = -1; // invalid symbol, reject
                break;
            default:
                break;
        }
    }

    bool isAccepted() const {
        return state == 3;
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
        cout << "Accepted: starts with 'aab'" << endl;
    else
        cout << "Rejected: does not start with 'aab'" << endl;

    return 0;
}

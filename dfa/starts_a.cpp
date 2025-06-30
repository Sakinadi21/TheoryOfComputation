#include <iostream>   // for input/output
#include <string>     // for using the string class
using namespace std;  // avoid writing std:: repeatedly

// Define a class to simulate a DFA (Deterministic Finite Automaton)
class DFA {
private:
    int state;  // to keep track of the current state of the DFA

public:
    DFA() : state(0) {}  // constructor initializes the DFA in the start state 0

    // Process each character of the input string to change the state accordingly
    void process(char c) {
        switch(state) {
            case 0:
                // In start state (0), check the first character:
                // If it is 'a', move to state 1 (accepting state)
                if (c == 'a')
                    state = 1; // accepted state
                else
                    state = -1; // reject state if first char is not 'a'
                break;

            case 1:
                // Once in state 1 (accepted because first char was 'a'),
                // remain in state 1 as long as characters are 'a' or 'b'
                if (c == 'a' || c == 'b')
                    state = 1; // stay accepted
                else
                    state = -1; // reject if invalid character (not 'a' or 'b')
                break;

            default:
                // If DFA has already reached reject state (-1),
                // stay rejected regardless of input characters
                break;
        }
    }

    // Function to check if DFA is in accepting state
    bool isAccepted() const {
        return state == 1;
    }

    // Function to check if DFA is in reject state
    bool isRejected() const {
        return state == -1;
    }
};

int main() {
    string input;  // to store the input string

    cin >> input;  // read input string from user

    DFA dfa;  // create a DFA object starting at state 0

    // Process each character of the input string through the DFA
    for (char c : input) {
        dfa.process(c);  // update DFA state based on current character
        if (dfa.isRejected())
            break;  // stop early if string is rejected
    }

    // After processing all characters:
    // If DFA is in accepting state, print accepted message
    if (dfa.isAccepted())
        cout << "String accepted: starts with 'a'." << endl;
    else
        // Otherwise, print rejected message
        cout << "String rejected: does not start with 'a'." << endl;

    return 0;  // end of program
}

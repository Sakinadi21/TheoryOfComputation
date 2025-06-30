#include <bits/stdc++.h>
using namespace std;

class DFA{
 private :
 int state;
    char startChar;
    bool started;
char lastChar; // last character read

    public: 
    DFA() : state(0), started(false), startChar('\0') {}
    void process (char c){
        if(c !='a' && c != 'b'){
            state = -1; // invalid input, reject
            return;
        }
        if (!started) {
            startChar = c;
            started = true;
            state = 1; // move to state 1: started reading
        }else {
            if (state != -1) {
                // Just keep updating the current character to check at the end
                lastChar = c;
            }
        }
        
    }
    bool isAccepted() const {
        return (state == 1) && started && (startChar == lastChar);
    }
    bool isRejected() const {
        return state == -1;
    }
};

int main(){
    string input;
    cin >> input;
    DFA dfa;
    for (char c : input) {
        dfa.process(c);
        if (dfa.isRejected()) break;
    }
    if(dfa.isAccepted())
        cout << "Accepted: starts and ends with same symbol" << endl;
    else
        cout << "Rejected" << endl;
}
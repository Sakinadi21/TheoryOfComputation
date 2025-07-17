#include <iostream>
#include <string>
using namespace std;

class DFA{

private :
int state;
char startChar;
bool started;
char lastChar;
public :
DFA() : state(0), started(false), startChar('\0') {}

void process(char c){
    if(!started){
        startChar = c;
        started = true;
        state =1;
    }else{
        if(state !=-1){
            lastChar = c;
        }
    }
}
bool isAccepted() const {
    return (state == 1) && started && (startChar != lastChar);
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
        if (dfa.isRejected()) break;
    }

    if (dfa.isAccepted())
        cout << "Accepted: starts and ends with different symbols" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
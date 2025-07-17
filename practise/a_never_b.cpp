#include <iostream>
#include <string>
using namespace std;

class DFA{
    private:
    int state;
public :
DFA() :state(0){}

void process(char c){
    if(c !='a' && c !='b'){
        state =-1;
        return;
    }
    if(state == -1) return;
    if (state ==0){
        if(c=='a')

            state =1; // saw 'a'
    }else if(state ==1){
        if(c=='b')
            state =-1; // 'a' followed by 'b' → reject
        else if(c=='a')
            state =1; // still saw 'a'
    }
}
bool isAccepted() const {
    return state != -1;
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
        if (!dfa.isAccepted()) break;
    }

    if (dfa.isAccepted())
        cout << "Accepted: 'a' is never followed by 'b'" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

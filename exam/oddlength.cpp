#include <iostream>
#include <string>
using namespace std;
enum State {
    q0,        
    q1,        
    q2,        
    q_reject  
};
bool isAcceptedByDFA(const string& input) {
    State currentState=q0;

    for(char ch : input) {
        switch(currentState){
            case q0:
                if (ch=='0') currentState = q1;
                else currentState = q_reject;
                break;
            case q1:
                if (ch=='0'||ch=='1') currentState = q2;
                break;
            case q2:
                if (ch=='0'||ch =='1') currentState = q1;
                break;
            case q_reject:
               
                break;
        }
    }
    return currentState==q1;  
}

int main() {
    string input; 
    cin >> input;
    for (char c : input) {
        if (c != '0'&&c != '1') {
            cout << "Rejected(Invalid character in input)" << endl;
            return 0;
        }
    }
    if (isAcceptedByDFA(input))
        cout<<"Accepted"<< endl;
    else
        cout<<"Rejected"<< endl;
    return 0;
}

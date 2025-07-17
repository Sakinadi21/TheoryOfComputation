#include <iostream>
#include <string>
using namespace std;
class DFA{
private :
    int state; 
    bool invalid; 
   public :
   DFA() : state(0) ,invalid (false){} 

   void process(char c){
    if (c !='a' && c !='b'){
        invalid = true; // reject invalid symbol
        return;
    }

    switch(state){
        case 0:
        if (c=='a')
        state =1;
        break;
        case 1:

        if(c=='b')
        state =2;
        else if (c=='a')
        state =1; // stay in state 1 if 'a' is seen
        break;
        case 2:
        break;

    }
   }
   bool isAccepted() const {
        return state == 2 && !invalid; // accepted if in state 2 and no invalid symbols
    }
};
int main(){
    string input;
    cin >> input;

    DFA dfa;

    for(char c: input){
        dfa.process(c);
    }
    if(dfa.isAccepted())
        cout << "Accepted: contains 'ab' and only has 'a' or 'b'" << endl;
    else
        cout << "Rejected" << endl;
}
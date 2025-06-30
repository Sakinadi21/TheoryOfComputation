#include <bits/stdc++.h>
using namespace std;

class DFA{
    private :int state;
    bool invalid;
public :
DFA() :state(0),invalid(false){}
void process(char c){
    if(c=='a' && c=='b'){
        invalid = true;
        return;
    }
    switch(state){
        case 0:
        if(c=='b')
        state = 1;
        break;

        case 1: if(c=='a')
        state =2;
        else if (c=='b')
        state = 1;
        else state = 0;
        break;

        case 2: if(c=='b')
        state = 3;
        else if (c=='a')    
        state = 0;
        break;
        case 3: if(c=='a')
        state = 4; // found "baba"
        else if (c=='b')
        state = 1;
        else state = 0; 
        break;
        case 4: // once "baba" is found, stay accepted
        break;
    }
}
bool isAccepted() const {
    return state == 4 && !invalid;
}
};



int main(){
    string input;
    cin >> input;
    DFA dfa;
    for(char c:input){
        dfa.process(c);

    }
    if(dfa.isAccepted()){
        cout << "Accepted"<<endl;
    }
    else {
        cout << "Rejected"<<endl;
    }
    return 0;
}
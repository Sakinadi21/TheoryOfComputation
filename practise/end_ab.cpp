#include <bits/stdc++.h>
using namespace std;


class DFA{
    private : 
        int state;
        bool invalid;
        public:
        DFA() : state(0), invalid(false) {}
        void process(char c){
            if(c!='a' && c!='b'){
                invalid = true;
                return;
            }

            switch(state){
                
            }
        }
}

int main(){
    string input;
    cin >> input;

    DFA dfa;
    for (char c : input) {
        dfa.process(c);
    }
    if (dfa.isAccepted()) {
        cout << "Accepted" << endl;
    } else {
        cout << "Rejected" << endl;
    }
}
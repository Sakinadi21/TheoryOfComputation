#include <iostream>
#include <string>
using namespace std;
enum State {
    q0, q1, q2, dead
};
State transition(State current,char input) {
    switch(current) {
        case q0:
            if (input=='a') return q1;
            else return dead;
        case q1:
            if (input=='a') return q1;
            else if (input=='b') return q2;
            else return dead;
        case q2:
            if(input=='a')return q1;
            else if (input=='b') return q2;
            else return dead;
        case dead:
            return dead;
    }
    return dead; 
}
bool is_accepting(State s) {
    return s==q2;
}
int main() {
    string input;
    cin >> input;
    State current = q0;
    for (char c : input) {
        if (c !='a' && c != 'b') {
            cout << "Invalid character.\n";
            return 1;
        }
        current=transition(current, c);
    }
    if (is_accepting(current))
      {  cout<<"Accepted .\n";
        cout<<q1<<endl;
         cout<<q0<<endl;
          cout<<q2<<endl;}
    else
      {  cout << "Rejected.\n";
        cout<<q1<<endl;
         cout<<q0<<endl;
          cout<<q2<<endl;}

    return 0;
}

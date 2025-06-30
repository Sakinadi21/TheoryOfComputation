/*
Traffic Light Controller
Q:
Design a DFA for a traffic light system with 3 states: Green → Yellow → Red → Green... It cycles in this order. Given input commands next, simulate the DFA to show the current light color.

Explanation:

States: Green (G), Yellow (Y), Red (R).

Input: next triggers transition to next state in cycle.

Output: current state (light color).*/

#include <iostream>
#include <string>
using namespace std;

enum State { GREEN, YELLOW, RED };

int main() {
    State state = GREEN;
    string input;

 //   cout << "Traffic Light Simulator. Type 'next' to change light, 'exit' to stop.\n";

    while (true) {
        cout << "Current Light: ";
        switch(state) {
            case GREEN: cout << "Green\n"; break;
            case YELLOW: cout << "Yellow\n"; break;
            case RED: cout << "Red\n"; break;
        }
        cout << "Command: ";
        cin >> input;

        if (input == "exit") break;
        else if (input == "next") {
            // DFA transition
            switch(state) {
                case GREEN: state = YELLOW; break;
                case YELLOW: state = RED; break;
                case RED: state = GREEN; break;
            }
        } else {
            cout << "Invalid command.\n";
        }
    }
    return 0;
}

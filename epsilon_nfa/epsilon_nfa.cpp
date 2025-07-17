#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

class NFA {
    map<int, map<char, set<int>>> transitions;
    set<int> finalStates;

public:
    void addTransition(int from, char symbol, int to) {
        transitions[from][symbol].insert(to);
    }

    void addEpsilon(int from, int to) {
        transitions[from]['e'].insert(to); // use 'e' for epsilon
    }

    void addFinalState(int state) {
        finalStates.insert(state);
    }

    void epsilonClosure(set<int>& states) {
        vector<int> stack(states.begin(), states.end());
        while (!stack.empty()) {
            int state = stack.back(); stack.pop_back();
            for (int next : transitions[state]['e']) {
                if (!states.count(next)) {
                    states.insert(next);
                    stack.push_back(next);
                }
            }
        }
    }

    bool accepts(const string& input) {
        set<int> current = {0}; // assume start state is 0
        epsilonClosure(current);
        for (char c : input) {
            set<int> nextStates;
            for (int state : current) {
                for (int next : transitions[state][c]) {
                    nextStates.insert(next);
                }
            }
            current = nextStates;
            epsilonClosure(current);
        }
        for (int state : current) {
            if (finalStates.count(state)) return true;
        }
        return false;
    }
};

int main() {
    NFA nfa;
    nfa.addTransition(0, 'a', 1);
    nfa.addEpsilon(1, 2);
    nfa.addTransition(2, 'b', 3);
    nfa.addFinalState(3);

    string s;
    cin >> s;
    if (nfa.accepts(s)) cout << "Accepted\n";
    else cout << "Rejected\n";
}

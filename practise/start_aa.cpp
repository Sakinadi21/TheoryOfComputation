#include <bits/stdc++.h>
using namespace std;
class DFA
{
private:
    int state;

public:
    DFA() : state(0) {}

    void process(char c)
    {
        switch (state)
        {
        case 0:
            if (c == 'a')
                state = 1;
            else
                state = -1;
            break;

        case 1:
            if (c == 'a')
            {
                state = 2;
            }
            else
                state = -1;
            break;

        case 2:
            if (c == 'a' || c == 'b')
            {
                state = 2;
            }
            else
            {
                state = -1;
                break;
            }
        default:
            break;
        }
    }
    bool isAccepted() const
    {
        return state == 2; // Accepted if in state 2
    }
    bool isRejected() const
    {
        return state == -1; // Rejected if in state -1
    }
};

    int main()
    {
        string input;
        cin >> input;

        DFA dfa;
        for (char c : input)
        {
            dfa.process(c);
            if (dfa.isRejected())
            {
                break;
            }
        }
        if (dfa.isAccepted())
        {
            cout << "accepted:" << endl;
        }
        else
        {
            cout << "rejected:" << endl;
        }
        return 0;
    }
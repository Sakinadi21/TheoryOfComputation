#include <iostream>
#include <string>
using namespace std;

class DFA
{
private:
    int state;

public:
    DFA() : state(0) {}

    void process(char c)
    {
        if (c != 'a' && c != 'b')
        {
            state = -1;
            return;
        }

        if (state == -1)
            return;
        if (state == 0)
        {
            if (c == 'a')
                state = 1;
        }
        else if (state == 1)
        {
            if (c == 'b')
                state = 0;
            else
                state = -1;
        }
    }

    bool isAccepted() const
    {
        return state == 0;
    }

    bool isRejected() const
    {
        return state == -1;
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
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;
    return 0;
}
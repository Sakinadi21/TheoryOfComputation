#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    if (!scanf("%1000s", s)) return 0;

    int state = 0;
    for (int i = 0; s[i]; ++i) {
        char c = s[i];
        if (c != 'a' && c != 'b') { state = -1; break; }

        // Transition table
        switch (state) {
            case 0: state = (c=='a'?1:0); break;
            case 1: state = (c=='a'?1:2); break;
            case 2: state = (c=='b'?3:(c=='a'?1:0)); break;
            case 3: state = (c=='b'?4:(c=='a'?1:0)); break;
            case 4: state = (c=='a'?1:0); break;
        }
    }

    // Accept only if DFA ends in state 4
    puts(state == 4 ? "Accepted" : "Rejected");
    return 0;
}

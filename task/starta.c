/*Construct a DFA that accepts all strings over {a,b} where strings are start with 'a'.*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int flag = 0;
    int len = strlen(s);

    // Check if the first character is 'a' and the rest are either 'a' or 'b'
    if (s[0] == 'a') {
        flag = 1;  // Assume the string is valid

        for (int i = 1; i < len; i++) {
            if (s[i] != 'a' && s[i] != 'b') {
                flag = 0;  // Reject the string if it contains other characters
                break;
            }
        }
    }

    if (flag == 1)
        printf("accepted\n");
    else
        printf("rejected\n");

    return 0;
}

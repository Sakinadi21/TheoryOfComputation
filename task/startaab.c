#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int flag = 0;
    int len = strlen(s);

    // Check if the string starts with "aab" and only contains 'a' or 'b' afterwards
    if (len >= 3 && s[0] == 'a' && s[1] == 'a' && s[2] == 'b') {
        for (int i = 3; i < len; i++) {
            if (s[i] != 'a' && s[i] != 'b') {
                flag = 0;  // Reject if there's any character other than 'a' or 'b'
                break;
            } else {
                flag = 1;
            }
        }
    }

    if (flag == 1) {
        printf("accepted\n");
    } else {
        printf("rejected\n");
    }

    return 0;
}

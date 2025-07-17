#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);  // Read input string

    int flag = 1;     // Assume the string is valid
    int len = strlen(s);

    // Iterate over the string
    for (int i = 0; i < len; i++) {
        // If 'a' is found, check if it is followed by 'b'
        if (s[i] == 'a') {
            if (i + 1 >= len || s[i + 1] != 'b') {
                // If 'a' is not followed by 'b' or it's the last character, reject
                flag = 0;
                break;
            }
            i++;  // Skip the next character ('b') as it's part of the valid 'a' 'b' pair
        }
    }

    // Print the result based on the flag
    if (flag == 1) {
        printf("accepted\n");
    } else {
        printf("rejected\n");
    }

    return 0;
}

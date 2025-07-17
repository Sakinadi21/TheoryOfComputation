#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidString(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != 'a' && str[i] != 'b') {
            return false;
        }

    }
    return true;
}

int main() {
    char str[1000];

   
    scanf("%s", str);

    if ((strlen(str) % 2 == 0) && isValidString(str)) {
        printf("Accepted\n");
    } else {
        printf("Not accepted\n");
    }

    return 0;
}

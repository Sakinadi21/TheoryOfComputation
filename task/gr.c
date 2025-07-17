#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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
    scanf("%999s", str);
    int len = strlen(str);

    int countA = 0, countB = 0;
    bool bStarted = false;

    for (int i = 0; i < len; i++) {
        if (str[i] == 'a') {
            if (bStarted) {
                printf("not accepted");
                return 0;
            }
            countA++;
        } else if (str[i] == 'b') {
            bStarted = true;
            countB++;
        }
    }

    if (len > 0 && str[0] == 'a' && str[len - 1] == 'b' &&
        isValidString(str) && countA == countB) {
        printf("accepted");
    } else {
        printf("not accepted");
    }

    return 0;
}

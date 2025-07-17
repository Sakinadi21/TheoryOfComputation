#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool zero_followed_by_one(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '0' && str[i + 1] != '1')
        return false;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Every '0' followed by at least one '1': %d\n", zero_followed_by_one(str));
    return 0;
}


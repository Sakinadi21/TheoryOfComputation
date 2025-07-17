#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool every_a_followed_by_b(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' && str[i + 1] != 'b')
        return false;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Every 'a' followed by 'b': %d\n", every_a_followed_by_b(str));
    return 0;
}


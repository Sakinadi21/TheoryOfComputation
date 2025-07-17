#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool contains_baba(char *str) {
    for (int i = 0; str[i + 3] != '\0'; i++) {
        if (str[i] == 'b' && str[i + 1] == 'a' && str[i + 2] == 'b' && str[i + 3] == 'a')
            return true;
    }
    return false;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Contains 'baba': %d\n", contains_baba(str));
    return 0;
}


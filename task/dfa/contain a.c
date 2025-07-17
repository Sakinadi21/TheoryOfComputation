#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool contains_ab(char *str) {
    for (int i = 0; str[i + 1] != '\0'; i++) {
        if (str[i] == 'a' && str[i + 1] == 'b') return true;
    }
    return false;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Contains 'ab': %d\n", contains_ab(str));
    return 0;
}


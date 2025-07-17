#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool starts_with_10(char *str) {
    return strlen(str) >= 2 && str[0] == '1' && str[1] == '0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Starts with '10': %d\n", starts_with_10(str));
    return 0;
}


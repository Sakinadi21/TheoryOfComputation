
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool starts_with_aa(char *str) {
    return strlen(str) >= 2 && str[0] == 'a' && str[1] == 'a';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Starts with 'aa': %d\n", starts_with_aa(str));
    return 0;
}

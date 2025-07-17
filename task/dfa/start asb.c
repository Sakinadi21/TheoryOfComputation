
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool starts_with_aab(char *str) {
    return strlen(str) >= 3 && str[0] == 'a' && str[1] == 'a' && str[2] == 'b';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Starts with 'aab': %d\n", starts_with_aab(str));
    return 0;
}

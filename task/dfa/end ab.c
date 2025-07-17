#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool ends_with_ab(char *str) {
    int len = strlen(str);
    return len >= 2 && str[len - 2] == 'a' && str[len - 1] == 'b';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Ends with 'ab': %d\n", ends_with_ab(str));
    return 0;
}


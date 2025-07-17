#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool length_exactly_2(char *str) {
    return strlen(str) == 2;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (length_exactly_2(str) && (str[0] == 'a' || str[0] == 'b') && (str[1] == 'a' || str[1] == 'b')) {
        printf("Accepted: length exactly 2\n");
    } else {
        printf("Not accepted\n");
    }

    return 0;
}

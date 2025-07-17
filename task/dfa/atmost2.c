#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool length_at_most_2(char *str) {
    return strlen(str) <= 2;
}


int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("length at most 2: %d\n", length_at_most_2(str));
    return 0;
}


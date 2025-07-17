
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool length_divisible_by_2(char *str) {
    return strlen(str) % 2 == 0;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("length divisible by 2: %d\n", length_divisible_by_2(str));
    return 0;
}


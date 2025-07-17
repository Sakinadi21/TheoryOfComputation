#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool start_and_end_different(char *str) {
    int len = strlen(str);
    return len > 0 && str[0] != str[len - 1];
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Starts and ends with different symbols: %d\n", start_and_end_different(str));
    return 0;
}


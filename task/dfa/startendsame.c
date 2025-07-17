#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool start_and_end_same(char *str) {
    int len = strlen(str);
    return len > 0 && str[0] == str[len - 1];
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Starts and ends with same symbol: %d\n", start_and_end_same(str));
    return 0;
}


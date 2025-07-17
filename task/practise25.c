#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char str[1000];
    
    scanf("%999s", str);  // Prevent buffer overflow

    if (str[0] == '0') {  // Check if the string starts with '0'
        if (strlen(str) % 2 == 1) {
            printf("Accepted\n");
        } else {
            printf("Not accepted\n");
        }
    } else {
        printf("Not accepted\n");
    }

    return 0;
}

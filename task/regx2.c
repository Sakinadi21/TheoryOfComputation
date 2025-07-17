#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isValidString(char str[]) {
    for (int i=0;i<strlen(str);i++) {
        if (str[i]!='a'&&str[i]!='b') {
            return false;
        }
    } return true;
}
int main(){
    char str[1000];
    scanf("%999s", str);
    int len=strlen(str);
    if(len>0&&str[len-3]=='a'&&str[len-2]=='b'&&str[len-1]=='b'&&isValidString(str)){
        printf("accepted");
    }else {
        printf("not accepted");
    }return 0;
}

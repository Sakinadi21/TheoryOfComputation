
#include<stdio.h>
#include<stdbool.h>
bool starts_with_a(char *str){
 return str[0]=='a';
 }
int main(){
 char str[100];
 printf("Enter a string : ");
 scanf("%s",&str);
 printf("Starts with 'a; : %d\n",starts_with_a(str));
}







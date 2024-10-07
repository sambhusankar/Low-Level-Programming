#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character:  ");
    scanf("%c", &ch);
    if(ch >= 'a' && ch <= 'z')
        printf("it is lower letter");
    else
        printf("it is upper letter");
    return 0;
}
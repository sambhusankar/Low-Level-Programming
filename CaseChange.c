#include <stdio.h>

int main(){
    char a;
    printf("Enter a character in small letter from a - z:  ");
    scanf("%c", &a);
    printf("The capital letter of %c is %c", a, a - 32);
    return 0;
}
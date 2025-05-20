#include <stdio.h>

int main(){
    char x;
    printf("Please enter a character:  ");
    x= getchar();
    printf("Here is the capital letter of this character: ");
    putchar(x - 32);
    return 0;
}
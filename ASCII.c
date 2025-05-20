#include <stdio.h>
int main(){
    int value;
    printf("Enter a value to see the character:  ");
    scanf("%d", &value);
    printf("%d for this the character is %c", value, value);
    return 0;
}
#include <stdio.h>

int main(){
    int a, b;
    printf("Please enter two numbers to swap:  ");
    scanf("%d %d", &a, &b);
    a = a +b;
    b = a - b;
    a = a - b;
    printf(" a = %d b = %d", a, b);
    return 0;
}
#include <stdio.h>
int main(){
    int num;
    int count = 0;
    int digits[10];
    printf("Please enter a number to reverse it's digits:  ");
    scanf("%d", &num);
    int temp = num;
    while(temp > 0){
        digits[count++] = temp % 10;
        temp /= 10;
    };
    for (int i = 0; i< count; i++){
        printf("%d", digits[i]);

    };
    return 0;
}
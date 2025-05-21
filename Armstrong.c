#include <stdio.h>

int main(){
    int num;
    int digits[3];
    int count = 0;
    int sums = 0;
    printf("Please enter a number to check is it Armstrong or not:  ");
    scanf("%d", &num);
    int original = num;
    while(num > 0){
        digits[count++] = num % 10;
        num /= 10;
    };
    for(int i = 0; i< count; i++){
        printf("%d \n", digits[i]);
        sums += (digits[i] * digits[i] * digits[i]);
        printf("%d \n", sums);
    };
    if(sums == original){
        printf("%d", sums);
        printf("It is a armstrong number");
    }else{
         printf("%d", sums);
        printf("It is not a armstrong number");
    };
    return 0;
}
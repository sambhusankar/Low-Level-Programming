#include <stdio.h>

int main(){
    int num;
    int isPrime = 1;
    printf("Enter a number to check is it prime or not:  ");
    scanf("%d", &num);
    if(num == 0 || num == 1){
        printf("This is not a prime number");
        return 0;
    }
    for(int i = 2; i <= num / 2; i++){
        if(num % i == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime){
        printf("It is a prime number");
    } else {
        printf("It is not a prime number");
    }

    return 0;
}
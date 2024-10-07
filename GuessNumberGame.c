#include <stdio.h>
int main(){
    int num = 50;
    int guess;
    while(1){
        printf("Enter a number:  ");
        scanf("%d",  &guess);
        if(guess == num){
            printf("You won the game.");
            break;
        }
        else if(guess > num){
            printf("Plz enter a smaller number \n");
        }
        else if(guess < num){
            printf("Plz enter a bigger number \n");
        }
    }
    return 0;
}
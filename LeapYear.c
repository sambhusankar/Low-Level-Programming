#include <stdio.h>
int main(){
    int year;
    printf("enter a year:  ");
    scanf("%d", &year);
    if(year%4 == 0){
        printf("the year you entered is a leap year");
        
    }
    else{
        printf("it is not a leap year");
    }
    return 0;
}
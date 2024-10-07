#include <stdio.h>
int main(){
    float income;
    printf("enter your income:  ");
    scanf("%f", &income);
    if(income > 2.5 && income <= 5)
        printf("your tax is %f %%", income/100*10);
    if(income > 5 && income <= 10)
        printf("your tax is %f %%", income/100*20);
    if(income > 10)
        printf("your tax is %f %%", income/100*30);
    return 0;
}
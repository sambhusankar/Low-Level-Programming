#include <stdio.h>

int main(){
    float f;
    printf("Enter Fahrenheit to convert in Celcious:  ");
    scanf("%d", &f);
    printf("Celcious of this Fehrenheit is %f", (f -32) * 5 / 9);
}
#include <stdio.h>
int main(){
    float PI = 3.14;
    float A, C, R;
    printf("Enter the Radious to calculate the Area and Circumferance:  ");
    scanf("%f", &R);
    printf("The is Area is %f and the Circumferance is %f", PI * R * R, 2 * PI * R );
    return 0;
}
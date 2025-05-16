#include <stdio.h>

int main(){
    int p, t, r;
    float i;

    printf("Please enter Price, Time (Months), and Interest Rate: ");
    scanf("%d %d %d", &p, &t, &r);

    printf("You entered: %d %d %d\n", p, t, r);

    i = (p * t * r) / 100.0;

    printf("Your interest for this requested detail is: %.2f\n", i);

    return 0;
}

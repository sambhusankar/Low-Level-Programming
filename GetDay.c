#include <stdio.h>

int main(){
    int x;
    char y;
    startagain:  //goto label
    printf("Please enter a number between 1 - 7 to get the day name");
    scanf("%d", &x);
    getchar();
    switch (x){
        case 1:
          printf("Sunday");
          break;
        case 2:
          printf("Monday");
          break;
        case 3:
          printf("Tuesday");
          break;
        case 4:
          printf("Wednesday");
          break;
        case 5:
          printf("Thursday");
          break;
        case 6:
          printf("Friday");
          break;
        case 7:
          printf("Saturday");
          break;
        default:
          printf("Invalid number selection.");
          break;
    };

    printf("Do you want to continue Pleae enter Y (Yes)");
    y = getchar();
    printf("Here is 7 %c, %d",y, y);
    if(y == 'Y' || y == 'y'){
        goto startagain;
    };
       
    return 0;
}
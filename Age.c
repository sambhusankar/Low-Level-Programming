#include <stdio.h>
#include <time.h>

int main(){
    int doy;
    struct tm *current_time;
    time_t t;
    time(&t);
    current_time = localtime(&t);
    int year = current_time->tm_year + 1900;
    printf("Please enter your DOY:  ");
    scanf("%d", &doy);
    printf("Your age is %d", year - doy);
    
    return 0;
}
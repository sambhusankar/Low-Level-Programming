#include <stdio.h>
int main(){
    int i = 0;
    int sum = 0;
    do{
        sum += i;
        i++;
    }
    while(i<6);
    printf("%d", sum);
    return 0;
}
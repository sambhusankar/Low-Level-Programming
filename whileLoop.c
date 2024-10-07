#include <stdio.h>
int main(){
    int i = 0;
    int sum = 0;
    while(i < 6){
        sum = sum + i;
        i++;
    }
    printf("%d", sum);
    return 0;
}
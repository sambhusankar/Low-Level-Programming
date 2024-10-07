#include <stdio.h>
int main(){
    char str[] = "Athulan";
    int count = 0;
    char c = str[count];
    while(c != '\0'){
        c = str[count];
        count ++;

    }
    printf("%d", count);
    return 0;
}
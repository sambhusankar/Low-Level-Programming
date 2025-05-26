#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char ch = 'Y';
    srand(time(NULL)); 
    while(ch == 'Y' || ch == 'y'){
        printf("%d\n", rand());
        printf("Do you want to continue generating random number");
        scanf("%c", &ch);
        getchar();
    }
    return 0;
}
#include <stdio.h>

int main(){
    int x = 1;
    A:
    printf("%d -> ", x);
    x = x +1;
    B:
    printf("%d -> ", x + 1);
    x  = x + 2;

    if(x <= 10){
        printf("In 10");
        goto A;
    }
    else if( x <= 20){
        printf("In 20");
        goto B;
    }
    return 0;
}
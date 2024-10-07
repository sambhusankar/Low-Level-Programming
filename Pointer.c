#include <stdio.h>
int main(){
    int i = 5;
    int *j = &i;
    printf("the address of i is %d", *(&i));
    return 0;
}
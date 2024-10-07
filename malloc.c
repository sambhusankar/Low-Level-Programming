#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int n = 5;
    ptr = (int*) calloc( n , sizeof(int));
    ptr[0] = 1;
    ptr[1] = 2;
    free(ptr);
    ptr[3] = 1;
    ptr[4] = 2;
    ptr = (int*) realloc(ptr, 10 * sizeof(int));
    ptr[1] = 2;
    printf("%d", ptr[1]);
    return 0;
}
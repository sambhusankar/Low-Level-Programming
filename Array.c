#include <stdio.h>
int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int *addr = arr;
    printf("%d", *addr+2);
    return 0;
}
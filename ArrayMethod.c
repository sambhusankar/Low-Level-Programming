#include <stdio.h>
typedef struct example{
    int i;
    int j;
} E;
int main(){
    E e;

    E* ptr = &e;
    (*ptr).i = 10;
    printf("%d", ptr-> i);
    return 0;
}
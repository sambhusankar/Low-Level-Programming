#include <stdio.h>
#include <string.h>
int main(){
    char list[][4] = {"ram", "sita", "gita"};
    char name[4];
    strcpy(name, list[0]);
    printf("%u %u", &name, &list[0]);
    return 0;
}
#include <stdio.h>
int main(){
    char str[50];
    printf("Enter a sentence :");
    fgets(str, sizeof(str), stdin);
    printf("%s", str);
    return 0;
}
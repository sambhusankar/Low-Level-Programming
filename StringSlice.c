#include <stdio.h>
char *Slice(int m, int n, char str[]){
    int *ptr = &str[m];
    int *ptr2 = &str[n];
    str = ptr;
    str[n] = '\0';
    return str;
 
}
int main(){
    char name[] = "Sankars";
    
    printf("%s", Slice(2, 5, name));
    return 0;
}
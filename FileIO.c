#include <stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("testfile.txt", "r");
    if(ptr == NULL){
        printf("file is no exist");
    }
    int num;
    fscanf(ptr, "%d", &num);
    printf("%d", num);
    fscanf(ptr, "%d", &num);
    printf("%d", num);
    fscanf(ptr, "%d", &num);
    printf("%d", num);
    fclose(ptr);
    return 0;
}
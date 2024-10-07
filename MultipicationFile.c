#include <stdio.h>
int main(){
    FILE *f;
    f = fopen("multipication.txt", "w");
    for(int i = 1; i < 11; i++){
        int num = i*10;
        fprintf(f, "%d x %d = %d \n", i, 10, num);
    }
    fclose(f);
    return 0;
}
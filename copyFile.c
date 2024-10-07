#include <stdio.h>
int main(){
    FILE *src;
    FILE *dst;
    src = fopen("src_file.txt", "r");
    dst = fopen("dst_file.txt", "a");
    char c;
    while(1){
        c = fgetc(src);
        fprintf(dst, "%c", c);
        if(c == EOF){
            break;
        }
    }
    return 0;
}
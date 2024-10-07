#include <stdio.h>
float C2F(int c){
    return c * (9.0 / 2.0) + 32;
}
int main(){
    float C = C2F(26);
    printf("%f", C);
    return 0;
}
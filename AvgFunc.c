#include <stdio.h>
int Average(int a, int b, int c){
    return (a + b + c) / 2;
}
int main(){
    int A = Average(2, 3, 0);
    printf("%d", A);
    return 0;
}
#include <stdio.h>
int Factorial(int a){
    if( a ==0 || a ==1){
        return 1;
    }
    return Factorial(a -1) * a;
}
int main(){
    int F = Factorial(3);
    printf("%d", F);
    return 0;
}
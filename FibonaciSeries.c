#include <stdio.h>
int Fibonaci(int n){
    if(n ==1 || n == 0){
        return 1;
    }
    return (n-1) + (n-2);
}
int main(){
    int F = Fibonaci(5);
    printf("%d", F);
    return 0;
}
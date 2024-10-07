#include <stdio.h>
int func(int *);
int func(int *a){
    printf("%u", a);
}
int main(){
    int i = 10;
    printf("%u \n", &i);
    func(&i);
    return 0;
}
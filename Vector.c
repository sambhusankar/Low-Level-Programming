#include <stdio.h>
struct vector{
    int i;
    int j;
    int k;
};
int main(){
    struct vector v = {1, 2, 3};
    printf("%d %d %d", v.i, v.j, v.k);
    return 0;
}
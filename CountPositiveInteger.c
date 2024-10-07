#include <stdio.h>
int main(){
    int arr[] = {1, -2, 3, -4, 5, -6, -7};
    int count = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < len; i++){
        if(arr[i] < 0){
            count++;
        }
    }
    printf("the counts of negative is %d", count);
    return 0;
}
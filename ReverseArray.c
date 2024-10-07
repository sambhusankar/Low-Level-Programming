#include <stdio.h>
void Reverse( int [], int);
void Reverse(int arr[], int length){
    
    int temp;
    for(int i = 0; i < length / 2; i++){
        temp = arr[length - i -1];
        arr[length - i -1] = arr[i];
        arr[i] = temp;

    }
}
int main(){
    int nums[] = {1, 2, 3, 4, 5};
    int len = sizeof(nums) / sizeof(nums[0]);
    printf("%d \n", nums[0]);
    Reverse(nums, len);
    printf("%d", nums[0]);
    return 0;
}
#include <stdio.h>

int main(){
    int sub1, sub2, sub3;
    int total = sub1 + sub2 + sub3;
    printf("enter subject 1 mark:  \n");
    scanf("%d", &sub1);
    printf("enter subject 2 mark:  \n");
    scanf("%d", &sub2);
    printf("enter subject 3 mark:  \n");
    scanf("%d", &sub3);
    if(total >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33){
        printf("you passed");
    }
    else{
        printf("you failed");
    }
    return 0;
}
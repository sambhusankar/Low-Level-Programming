#include <stdio.h>

int main(){
    char name[10];
    int age;
    printf("Please enter your Name:\n");
    scanf("%s", &name);
    printf("Please enter your age:\n");
    scanf("%d", &age);
    printf("Hi %s, Your age is %d\n", name, age);
    return 0;
}
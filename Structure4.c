#include <stdio.h>

void putdata(char name[], int age);

int main(){
    struct member{
        char name[20];
        int age;
    };
    struct member hari = {"Hari", 20};
    putdata(hari.name, hari.age);
    return 0;
}

void putdata(char name[], int age){
    printf("%s/n", name);
    printf("%d", age);
}
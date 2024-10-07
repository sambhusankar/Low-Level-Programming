#include <stdio.h>
#include <string.h>

struct Employee{
    int code;
    int salary;
    char name[];
};

int main(){
    struct Employee e1;
    e1.code = 10;
    e1.salary = 1000;
    strcpy(e1.name, "Sankar");
    int * ptr = &e1.code;
    printf("%d %d %s", ptr, e1.salary, e1.name);
    return 0;
}
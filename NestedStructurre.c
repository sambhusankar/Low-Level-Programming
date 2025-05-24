#include <stdio.h>

int main(){
    typedef struct {
        int year;
        int month;
        int day;
    } DOB;
    struct Employee{
        char name[10];
        DOB dob;
    };
    DOB dob = {2002, 9, 7};
    struct Employee emp = {"Sankar", dob};
    printf("%s\n", emp.name);
    printf("%d", emp.dob.year);
    return 0;
}
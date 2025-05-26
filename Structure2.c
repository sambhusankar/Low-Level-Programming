#include <stdio.h>
#include <string.h>

int main(){
    struct employee {
        int id;
        char name[20];
        char job[30];
    };

    struct employee emp1;
    emp1.id = 101;
    strcpy(emp1.name, "Sankar");
    strcpy(emp1.job, "Software Engineer");
    // emp1.job = "Software Engineer"; // This line is invalid and should be removed

    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Job: %s\n", emp1.job);

    return 0;
}
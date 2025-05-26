#include <stdio.h>

int main(){
    struct employee {
        int id;
        char name[15];
        int salary;
    };

    struct employee employees[5];
    for(int i = 0; i< 5; i++){
        printf("Enter employee name:  ");
        scanf("%s", &employees[i].name);
        getchar();
        printf("Enter employee id:  ");
        scanf("%s", &employees[i].id);
        getchar();
        printf("Enter employee salary:  ");
        scanf("%s", &employees[i].salary);
        getchar();
    };
    for(int i =0; i< 5; i++){
        printf("%s", employees[i].name);
    };
    return 0;
}
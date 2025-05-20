#include <stdio.h>

int main(){
    float x, y;
    char opr;
    printf("Please enter an arithmetic operation:  ");
    scanf("%f, %c, %f", &x, &opr, &y);
    if(opr == '+' || opr == '-' || opr == '*' || opr == '/'){
        switch (opr){
            case '+':
                printf("Result: %f", x + y);
                break;
            case '-':
                printf("Result: %f", x-y);
                break;
            case '/':
                printf("Result: %f", x/y);
                break;
            case '*':
                printf("Result: %f", x*y);
                break;
        }
    }
    else{
        printf("Invalid Operator");
    };
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a, b;
    char o;
    size_t len = 0;
    char *input = NULL;
    size_t read;

    printf("Enter the Operation (e.g., 12+3): \n");
    read = getline(&input, &len, stdin);

    // Remove the newline character if present
    if (input[read - 1] == '\n') {
        input[read - 1] = '\0';
        read--;
    }

    char num1[read], num2[read];
    int c1 = 0, c2 = 0;
    int num1I = 1, num2I = 0;

    for (int i = 0; i < read; i++) {
        if (input[i] == '*' || input[i] == '/' || input[i] == '+' || input[i] == '-') {
            o = input[i];
            num1I = 0;
            num2I = 1;
        } else {
            if (num1I == 1) {
                num1[c1++] = input[i];
            } else if (num2I == 1) {
                num2[c2++] = input[i];
            }
        }
    }

    num1[c1] = '\0';  // Null-terminate num1
    num2[c2] = '\0';  // Null-terminate num2

    a = atoi(num1);   // Convert num1 to an integer
    b = atoi(num2);   // Convert num2 to an integer

    int result;
    switch (o) {
        case '-':
            result = a - b;
            break;
        case '+':
            result = a + b;
            break;
        case '/':
            result = a / b;
            break;
        case '*':
            result = a * b;
            break;
        default:
            printf("Invalid Operator\n");
            return 1;  // Exit if invalid operator
    }

    printf("Result: %d\n", result);

    free(input);  // Free allocated memory for input
    return 0;
}

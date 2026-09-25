#include <stdio.h>

int main() {
    char op;
    float num1, num2;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (op) {
        case '+':
            printf("Result: %f\n", num1 + num2);
            break;

        case '-':
            printf("Result: %f\n", num1 - num2);
            break;

        case '*':
            printf("Result: %f\n", num1 * num2);
            break;

        case '/':
            printf("Result: %f\n", num1 / num2);
            break;

        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}

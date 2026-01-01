#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Simple Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;
        case 4:
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

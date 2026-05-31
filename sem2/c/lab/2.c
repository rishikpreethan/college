//Simple arithmatic calculator using switch case
#include <stdio.h>

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(op)
    {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("Result = %.2f", result);
            }
            else
            {
                printf("Division by zero is not possible.");
            }
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}

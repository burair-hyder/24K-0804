#include <stdio.h>

float calculate(float num1, float num2, char operation)
{
    float result;
    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("Error: Division by zero.\n");
            return 0;
        }
        break;
    default:
        printf("Invalid operation.\n");
        return 0;
    }
    return result;
}

int main()
{
    float number1, number2;
    char operation;

    printf("Enter first number: ");
    scanf("%f", &number1);
    printf("Enter second number: ");
    scanf("%f", &number2);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    float result = calculate(number1, number2, operation);
    printf("Result: %.2f\n", result);

    return 0;
}

#include <stdio.h>

void main()
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator  ");
    scanf(" %c", &op);   

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op)
    {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
                printf("Result = %d\n", a / b);
            break;

        case '%':
                printf("Result = %d\n", a % b);
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
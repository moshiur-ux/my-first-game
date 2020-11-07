#include<stdio.h>
int main()
{
    int num1, num2;
    char op;
    int finished = 0;

    printf("Simple Operations Calculator\n");
    printf(" \n");


    printf("Enter your desired operation (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter your two desired numbers: ");
    scanf("%d%d", &num1, &num2);


    switch(op)
    {
    case '+':
        printf("num1 + num2 = %.2d\n", num1+num2);
        break;

    case '-':
        printf("num1 - num2 = %.2d\n", num1-num2);
        break;

    case '*':
        printf("num1 * num2 = %.2d\n", num1*num2);
        break;

    case '/':
        printf("num1 / num2 = %.2d\n", num1/num2);
        break;

    default:
        printf("Error! That is not an operation option.");
        break;


    }
    while(1)
    {
        printf("Enter your desired operation (+, -, *, /): ");
        scanf("%c", &op);
        getchar();
        printf("Enter your two desired numbers: ");
        scanf("%d%d", &num1, &num2);


        switch(op)
        {
        case '+':
            printf("num1 + num2 = %.2d\n", num1+num2);
            break;

        case '-':
            printf("num1 - num2 = %.2d\n", num1-num2);
            break;

        case '*':
            printf("num1 * num2 = %.2d\n", num1*num2);
            break;

        case '/':
            printf("num1 / num2 = %.2d\n", num1/num2);
            break;


        default:
            printf("Error! That is not an operation option.");
            break;


        }

        return 0;


    }


}

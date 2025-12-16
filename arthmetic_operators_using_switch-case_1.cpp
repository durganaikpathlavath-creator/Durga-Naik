#include <stdio.h>

int main() 
{
    char op;
    float a, b;

    scanf(" %c", &op);
    scanf("%f %f", &a, &b);

    switch(op) 
	{
        case '+':
            printf("%.2f", a + b);
            break;

        case '-':
            printf("%.2f", a - b);
            break;

        case '*':
            printf("%.2f", a * b);
            break;

        case '/':
            if(b != 0)
                printf("%.2f", a / b);
            else
                printf("Error");
            break;

        default:
            printf("Invalid");
    }

    return 0;
}

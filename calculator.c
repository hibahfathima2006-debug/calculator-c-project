#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("enter the operator");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        printf("result=%d",a+b);
        break;
        case '-':
        printf("result=%d",a-b);
        break;
        case '*':
        printf("result = %d",a*b);
        break;
        case '/':
        printf("result=%d",a/b);
        if(b != 0)
                printf("Result = %d",a/b);
            else
                printf("Error! Division by zero");
            break;
        default:
        printf("invalid operator");
    }
    return 0;
}
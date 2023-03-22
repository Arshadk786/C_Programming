#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 2 Numbers\n");
    scanf("%d\n%d",&a,&b);
    printf("*************MENU*************\n");
    printf("\n\n1.ADDITION\n\n");
    printf("2.SUBTRACTION\n\n");
    printf("3.DIVISION\n\n");
    printf("4.MULTIPLICATION\n\n");
    
    switch (c)
    {
        case 1:
        c=a+b;
        printf("Addition = %d",c);
        break;

        case 2:
        c=a-b;
        printf("Subtraction = %d",c);
        break;

        case 3:
        c=a/b;
        printf("Division = %d",c);
        break;

        case 4:
        c=a*b;
        printf("Multiplication = %d",c);
        break;

        default:
        printf("You have selected wrong option\n");
        break;
    }
}
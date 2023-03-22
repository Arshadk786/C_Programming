#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%5==0 && a%7==0)
    {
        printf("%d is Divisible by 5 and 7",a);
    }
    else
    {
        printf("%d is not divisible by 5 and 7",a);
    }
}

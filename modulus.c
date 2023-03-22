#include<stdio.h>
void main()
{
    int a;
    printf("enter a  no");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("$d is divisible by 5",a);
    }
    else
    {
        printf("%d is  divisible by 5",a);
    }
}
//WAP to find factorial of a given no
#include<stdio.h>
void main()
{
    int i,n,factorial=1;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        factorial*=i;
        printf("%d\n",factorial);
    }
    printf("Factorial of %d = %d\n",n,factorial);
}
#include<stdio.h>
void main()
{
    int a,b,c,n,i;
    printf("Enter the number upto which you want to print fibonacii\n");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%d\n",c);
       
        a=b;
        b=c;
    }
}
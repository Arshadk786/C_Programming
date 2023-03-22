#include<stdio.h>
void main()
{
    int r,no,sum=0,temp;
    printf("enter a number");
    scanf("%d",&no);
    temp=no;
    while(no!=0)
    {
        r=no%10;
        sum=sum+r*r*r;
        no=no/10;
    }
    if(temp==sum)
    {
        printf("%d is an Armstrong No\n",sum);
    }
    else
    {
        printf("%d is not an Armstrong\n",sum);
    }
}
#include<stdio.h>
void main()
{
    int n,i,flag=0;
    printf("PRIME NUMBER\n");
    printf("Enter a Number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d is a NOT PRIME NUMBER\n",n);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is a PRIME NUMBER\n",n);
    }

}
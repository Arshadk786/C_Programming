//WAP to find submission of all the natural no between n to n+50
#include<stdio.h>
void main()
{
    int i,j,n;
    j=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=n;i<=n+50;i++)
    {
        j+=i;
        printf("%d\n",j);
    }
    printf("Submission=%d\n",j);
}
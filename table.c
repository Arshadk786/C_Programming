#include<stdio.h>
void main()
{
    int i,a,b;
    printf("ENTER A NUMBER TO DISPLAY ITS TABLE\n");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        b=a*i;
        printf("%d X %d = %d\n",a,i,b);


    }
}
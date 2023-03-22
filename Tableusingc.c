#include<stdio.h>
void main()
{
    int a,b,c;
    printf("ENTER A NUMBER TO KNOW ITS TABLE\n");
    scanf("%d",&b);
    for(a=1;a<=10;a++)
    {
        c=b*a;
        printf("%d*%d=%d\n",b,a,c);
    }
}
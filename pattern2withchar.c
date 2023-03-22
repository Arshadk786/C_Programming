//No of rows pattern
#include<stdio.h>
void main()
{
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%c",b+64);
        }
        printf("\n");
    }
}
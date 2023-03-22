//Repeat character pattern
#include<stdio.h>
void main()
{
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%c",a+64);  // ASCIi
                                // A=65 in int
                                // a=97 in int 
        }
        printf("\n");

    }
}
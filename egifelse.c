#include<stdio.h>

void main()
{
    float per;
    printf("Enter your percentage");
    scanf("%f",&per);
    if(per>=60)
    {
        printf("First class");
    }
    else
    {
        if(per>=40)
        {
            printf("Second class");
        }
        else
        {
            printf("fail/KT");
        }
    }
}

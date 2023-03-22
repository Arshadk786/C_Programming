#include<stdio.h>
void main()
{
    int year;
    printf("ENTER A YEAR TO CHECK WHETHER A YEAR IS A LEAP YEAR \n\n");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        printf("%d IS A LEAP YEAR",year);
    }
    else
    {
        printf("%d IS NOT A LEAP YEAR",year);
    }

}

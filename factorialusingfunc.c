#include<stdio.h>
int fact(int no)
{
    int i,fact=1;
    for(i=no;i>=1;i--)
    {
        fact=fact*i;
       
    }
     return fact;
    
}
void main()
{
    int no,ans;
    printf("Enter no");
    scanf("%d",&no);
    ans=fact(no);
    printf("Factorial of %d = %d\n",no,ans);


}
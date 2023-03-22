/*
                                 EXPERIMENT NO: 1
Modular program to find the factorial, fibonacci and palindrome using Menu driven code.

                                                        @NAME: Arshad Abdulla Khan
                                                        Roll No: 20CO24
                                                        2021-22

Modular programming is used and desired because in a professional environment it 
allows for dividing a program or task to multiple programmers while causing no 
issues of complexity or confusion in understanding the code.Modularity also allows 
for easier bug detection,code management and reusability.

Modular programming is a software design technique that emphasizes separating the functionality 
of a program into independent, interchangeable modules, such that each contains everything 
necessary to execute only one aspect of the desired functionality.
 
Menu Driven programming is the type of programming in which the user is given the choice to choose which
aspect or specific task he/she would like the program to perform.A menu driven program is efficient and
uses less memory as well.
*/

#include<stdio.h>
#include<stdlib.h>

int factorial(int num)
{
    int f=1,i;
    for(i=1;i<=num;i++)     // for(;num>0;num--)
    f=f*i;                  // f=f*num;
    return f;
}

void fibonacci(int n)
{
    int a,b,c;
    a=0;                   //Since the first two elements of a fibbonaci                                                       
    b=1;                   //series is constant it is directly displayed  
    printf("\nFibonacci Series upto %d:\n%d\t%d",n,a,b);
    c=a+b;
    while(c<=n)
    {
        printf("\t%d",c);
        a=b;
        b=c;
        c=a+b;
    }

}

int palindrome(int n)
{
    int rev=0,i;
    for(i=n;i>0;i=i/10)
        rev=rev*10+i%10;       //The reverse of the number is stored in rev using for loop
    if(rev==n)                 
        return 1;
    return 0;
}

int main()
{
    int i,ch,res,n;
    while(1)
    {
        printf("\n\n\t\t\tMENU.\n1. Factorial.\n2. Fibonacci.\n3. Palindrome.");
        printf("\n4. Exit.\n\tEnter your Choice:: ");
        scanf("%d",&ch);
        switch(ch)                                //Switch case used to allow implementation of menu
        {
            case 1:
            printf("\nEnter the Number: ");
            scanf("%d",&n);
            res=factorial(n);
            printf("\nFactorial of %d is %d",n,res);
            break;
            case 2:
            printf("\nEnter the Number: ");
            scanf("%d",&n);
            fibonacci(n);
            break;
            case 3:
            printf("\nEnter the Number: ");
            scanf("%d",&n);
            if(palindrome(n))
                printf("\nGiven number is Palindrome.");
            else
                printf("\nGiven number is not a Palindrome.");
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("\nPlease enter the correct choice...");
        }
    }
return 0;
}

/*
Conclusion:- The above program helped me to undersatnd the function is a 
block of code that performs a specific task. For example, 
the main is a function and every program execution starts from the main function.
It also made me understand implementation of menu driven 
programming using “Switch-case”.




Output:-
                        MENU.
1. Factorial.
2. Fibonacci.
3. Palindrome.
4. Exit.
        Enter your Choice:: 1

Enter the Number: 9

Factorial of 9 is 362880

                        MENU.
1. Factorial.
2. Fibonacci.
3. Palindrome.
4. Exit.
        Enter your Choice:: 2

Enter the Number: 9

Fibonacci Series upto 9:
0       1       1       2       3       5       8

                        MENU.
1. Factorial.
2. Fibonacci.
3. Palindrome.
4. Exit.
        Enter your Choice:: 3

Enter the Number: 9

Given number is Palindrome.

                        MENU.
1. Factorial.
2. Fibonacci.
3. Palindrome.
4. Exit.
*/
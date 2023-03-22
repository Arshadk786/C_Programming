/*


Exp 3:-Conversion of Infix to Postfix
                                                        @NAME Saim Shabbir Kaskar
                                                        20CO23
                                                        2021-22
The complex arithmetic operations can be converted into polish notation using stacks which then can be executed in two operands and an operator form.
Any normal mathematical formula can be written in 3 ways that are
1.Infix
2.Postfix
3.Prefix

The following are the examples of the same:-
1. "a+b"(Infix)
2. "ab+"(Postfix)
3. "+ab"(Prefix)

Infix statements are easier for humans to understand and calculate.
Whereas postfix and prefix statements are easier to understand
and calculate for computers and machines therefore there is a need
to convert infix statements to postfix statements.

A stack is required for converting a infix statement to
postfix statement.
There are a few rules to convert infix expressions to
postfix expression which are:-
1.When an operand is scanned add it to the postfix expression
2.If a operator is scanned then repeatedly push from the stack until
the precedence of the scanned operator is greater than the precedence of
the operators present in the stack and then push the scanned operator
into the stack
3.If a ")" is encoutered then pop from stack until "(" is
encountered in the stack both "(" and ")" will not be added
to the postfix expression.
4.Finally all the elements are scanned then pop from stack until
stack is empty.

The precedence of the operators are as follows:-
(
^,$
/,*
+,-

Given below is an example of conversion

Eg.  A="a+b-c*d" B=""
Step1: a is encountered.
        B="a"               stack = []
Step2: + is encountered.
        B="a"               stack = [+]
Step3: b is encountered.
        B="ab"              stack = [+]
Step4: - is encountered.
        B="ab+"             stack = [-]
Step5: c is encountered.
        B="ab+c"            stack = [-]
Step6: * is encountered.
        B="ab+c"            stack = [-,*]
Step7: d is encountered.
        B="ab+cd"           stack = [-,*]
Pop from stack and copy to B until the stack becomes empty.
        B="ab+cd*-"

*/

#include<stdio.h>       //Preprocessor Directive
#include<stdlib.h>
#define MAX 50

struct stack
{
    char data[MAX];
    int top;
};

void push(struct stack *st, char d)
{
    if(st->top==MAX-1)
        printf("\nStack Overflows..");
    else
    {
        st->top++;
        st->data[st->top]=d;
    }
}

char pop(struct stack *st)
{
    if(st->top==-1)
        return -1;
    else
        return st->data[st->top--];
}

int precedence(char op)    // For finding the precedence of the operators
{
    switch(op)
    {
        case '$':
        case '^':
        return 3;
        case '/':
        case '*':
        return 2;
        case '+':
        case '-':
        return 1;
    }
    return 0;
}

char *convert(char *expr)
{
    int i,j;
    char sym,*pexpr,el;
    struct stack s;
    s.top=-1;
    for(i=0;expr[i]!='\0';i++);
    pexpr=(char *)malloc(i);
    for(i=0,j=0;expr[i]!='\0';i++)
    {
        sym=expr[i];
        switch(sym)
        {
            case '(':
            push(&s,sym);
            break;
            case ')':
            while(s.top!=-1 && (el=pop(&s))!='(')  // Popping repeatedly until "(" is encountered
            pexpr[j++]=el;
            break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '$':
            case '^':
            while(s.top!=-1 && precedence(s.data[s.top])>=precedence(sym))   // For checking the precedence of the operators
            {
                pexpr[j++]=pop(&s);
            }
            push(&s,sym);  //Pushing the scanned operator into the stack
            break;
            default:        //for operand
            pexpr[j++]=sym;
            break;
        }
    }
    while(s.top!=-1)
    pexpr[j++]=pop(&s);   // Repeatedly popping until stack is empty
    pexpr[j]='\0';
    return pexpr;

}

int main()
{
    char *infix,*postfix;
    infix=(char*)malloc(1);
    printf("\nEnter the Infix Expression: ");
    scanf("%s",infix);
    postfix=convert(infix);
    printf("\nPostfix expression is %s",postfix);

}

/*
Conclusion:- It is a application of stack in which we have used the concept of 
stacks to covert the infix expression into postfix. we have used different function
 to perform the task such as puch, pop and  precedence. here there is some rules of 
operator precedence and other rules of stack popping and pushing.

OUTPUT:-

Enter the Infix Expression: ((A*B)+(C/D))         
Postfix expression is AB*CD/+ 

Enter the Infix Expression: a+b-c*d  
Postfix expression is ab+cd*- 
*/
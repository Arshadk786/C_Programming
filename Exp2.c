/*
                        EXPERIMENT NO 2
              Implementation of stack using Array

                                                        @NAME: Arshad Abdulla Khan
                                                        Roll No: 20CO24
                                                        2021-22           


Stack is a linear data structure in which the data is inserted and deleted from
the same end. Last In First Out (LIFO) structure.
This end is often called as top of stack.


OPERATIONS:
Operations on Stack:
1. Initialize the stack
2. Check whether the stack is empty or not.
3. Check whether the stack is full or not.
4. Insert an element into the stack if the stack is not full. This operation is
called as PUSH.
5. Delete an element from the top of stack if the stack is not empty. This
operation is called as POP.
6. Read an element from the top of stack if the stack is not empty. This 
operation is called as PEEK.

Implementation of Stack:
By two ways:
1. Arrays
2. Linked List
*/

//Implementation of Stack using Array

#include<stdio.h>       //Preprocessor Directive
#define MAX 5

struct stack
{
    int data[MAX];
    int top;
};

void initialize(struct stack *st)         
{
    st->top=-1;                     //The stack top is initiated with -1 to indicate no element is present
}

int isEmpty(struct stack *st)
{
    if(st->top==-1)         // return (st->top==-1)?1:0;
        return 1;
    else
        return 0;
}

int isFull(struct stack *st)
{
    if(st->top==MAX-1)      // return (st->top==MAX-1)?1:0;
        return 1;           // returning True
    else  
        return 0;           // returning False
}

void push(struct stack *st, int d)
{
    if(isFull(st))
        printf("\nStack Overflows..");
    else
    {
        st->top++;
        st->data[st->top]=d;                  //Inserting the element at the top of the stack
        printf("\nSuccessfully Pushed..");
    }
}

void pop(struct stack *st)
{
    if(isEmpty(st))
        printf("\nStack is Empty.");
    else{
        printf("\nPopped Element is %d",st->data[st->top]);    
        st->top--;                                                //Popping the element on top of stack after displaying
    }
}

void display(struct stack *st)
{
    int i;
    if(isEmpty(st)==1)
        printf("\nStack is empty.");
    else{
        printf("\nStack Content:");
        for(i=st->top;i>=0;i--)
            printf("\n%d",st->data[i]);   //Displaying full content of the stack
    }
}

peek(struct stack *st)
{
    if(isEmpty(st))
    
        printf("\nThe stack is empty");
    
    else
        printf("\nPeeked element is %d",st->data[st->top]);       //Displaying only the top element of the stack


}

int main()
{
    struct stack s;
    int i,ch,d;
    while(1)                   //Repeating menu until user exits
    {
        printf("\n\n\t\t\tMENU.\n1. Initialize.\n2. Push.\n3. Pop.");
        printf("\n4. Display.\n5. Peek.\n6. Exit \n\tEnter your Choice:: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            initialize(&s);
            break;
            case 2:
            printf("\nEnter the Data: ");
            scanf("%d",&d);
            push(&s,d);
            break;
            case 3:
            pop(&s);
            break;
            case 4:
            display(&s);
            break;
            case 5:
            peek(&s);
            break;
            case 6:
            exit(0);
            break;
            default:
            printf("\nPlease enter the correct choice....");
        }
    }
    return 0;
}
/* 
Conclusion:- In this programme we have successfully implemented stack using 
array and used PUSH function in the code to insert an element
to the top of stack, POP function used to remove the element from the top of stack.
The display function in the code is used to print the values.
*/

/*
OUTPUT:-

                        MENU.
1. Initialize.
2. Push.
3. Pop.
4. Display.
5. Peek.
6. Exit
        Enter your Choice:: 1


                        MENU.
1. Initialize.
2. Push.
3. Pop.
4. Display.
5. Peek.
6. Exit
        Enter your Choice:: 2

Enter the Data: 54

Successfully Pushed..

                        MENU.
1. Initialize.
2. Push.
3. Pop.
4. Display.
5. Peek.
6. Exit
        Enter your Choice:: 2

Enter the Data: 56

Successfully Pushed..

                        MENU.
1. Initialize.
2. Push.
3. Pop.
4. Display.
5. Peek.
6. Exit
        Enter your Choice:: 2

Enter the Data: 69

Successfully Pushed..

                        MENU.
1. Initialize.
2. Push.
3. Pop.
4. Display.
5. Peek.
6. Exit
        Enter your Choice:: 2  

Enter the Data: 11

Successfully Pushed..

                        MENU.
1. Initialize.
2. Push.
3. Pop.
4. Display.
5. Peek.
6. Exit
        Enter your Choice:: 4

Stack Content:
11
69
56
54

                        MENU.
1. Initialize.
2. Push.
3. Pop.
4. Display.
5. Peek.
6. Exit
        Enter your Choice:: 3

Popped Element is 11

                        MENU.
1. Initialize.
2. Push.
3. Pop.
4. Display.
5. Peek.
6. Exit
        Enter your Choice:: 4

Stack Content:
69
56
54

                        MENU.
1. Initialize.
2. Push.
3. Pop.
4. Display.
5. Peek.
6. Exit
        Enter your Choice:: 5

Peeked element is 69

                        MENU.
1. Initialize.
2. Push.
3. Pop.
4. Display.
5. Peek.
6. Exit
        Enter your Choice:: 4

Stack Content:
69
56
54

                        MENU.
1. Initialize.
2. Push.
3. Pop.
4. Display.
5. Peek.
6. Exit
        Enter your Choice::
*/

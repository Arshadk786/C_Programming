/*


Exp 5:- Implementation of Queue using array
                                                        @NAME:- Saim Shabbir kaskar
                                                        20CO23
                                                        2021-22
Queue is a linear data structure in which insertion is done from one end
and deletion is done from another end.
The end from which insertion is done is called the rear end.
The end from which deletion is done is called the front end.
It is First In First Out (FIFO) structure.


OPERATIONS:
1. Initializing the queue .
2. Checking whether it is empty.
3. Checking whether it is full.
4. Insert an element from the rear of a queue if it is not full.Also known as enqueue.
5. Delete an element from the front of a queue if it is not empty.
Sometime referred as dequeue.

Implementation of queue is done using a stack which consists of two int variables
keeping track of the front and rear index of the queue at all times
The rear variable is used to control insertion and the front variable
is used to control deletion of the elements. 
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct queue
{
    int data[MAX];
    int front, rear;
};

void initialize(struct queue *q)
{
    q->front=q->rear=-1;
}

int isEmpty(struct queue *q)
{
    if(q->rear==-1)         // return (q->rear==-1)?1:0;
        return 1;
    else
        return 0;
}

int isFull(struct queue *q)
{
    if(q->rear==MAX-1)      // return (q->rear==MAX-1)?1:0;
        return 1;           // returning True
    else  
        return 0;           // returning False
}

void insert(struct queue *q, int d)
{
    if(isFull(q))
        printf("\nQueue is Full..");
    else
    {
        q->rear++;
        q->data[q->rear]=d;
        if(q->front==-1)
        q->front=0;                          //If the inserted element is the first element then front=0
        printf("\nSuccessfully Inserted..");
    }
}

void delete(struct queue *q)
{
    if(isEmpty(q))
        printf("\nQueue is Empty.");
    else{
        printf("\nDeleted Element is %d",q->data[q->front]);
        if(q->front==q->rear)
            q->front=q->rear=-1;               //If the deleted element is the only element in the queue
        else                                   //then assign both front and rear with -1
            q->front++;
    }
}

void display(struct queue *q)
{
    int i;
    if(isEmpty(q)==1)
        printf("\nQueue is empty.");
    else{
        printf("\nQueue Content:\nFront = %d\tRear = %d",q->front,q->rear);
        for(i=q->front;i<=q->rear;i++)
            printf("\n%d",q->data[i]);
    }
}

int main()
{
    struct queue q;
    int i,ch,d;
    while(1)
    {
        printf("\n\n\t\t\tMENU.\n1. Initialize.\n2. Insert.\n3. Delete.");
        printf("\n4. Display.\n5. Exit.\n\tEnter your Choice:: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            initialize(&q);
            break;
            case 2:
            printf("\nEnter the Data: ");
            scanf("%d",&d);
            insert(&q,d);
            break;
            case 3:
            delete(&q);
            break;
            case 4:
            display(&q);
            break;
            case 5:
            exit(0);
            default:
            printf("\nPlease enter the correct choice....");
        }
    }
    return 0;
}

/*
Conclusion:- In this programme we have used array to implement queue. In which we have used
two ends, frond end rear end. Due to this ends we insert and delete the data.
Here we have used different function such as insert,display, delete and intialize.
 
Output:-

                        MENU.
1. Initialize.
2. Insert.
3. Delete.
4. Display.
5. Exit.
        Enter your Choice:: 1


                        MENU.
1. Initialize.
2. Insert.
3. Delete.
4. Display.
5. Exit.
        Enter your Choice:: 2

Enter the Data: 43

Successfully Inserted..

                        MENU.
1. Initialize.
2. Insert.
3. Delete.
4. Display.
5. Exit.
        Enter your Choice:: 2

Enter the Data: 6

Successfully Inserted..

                        MENU.
1. Initialize.
2. Insert.
3. Delete.
4. Display.
5. Exit.
        Enter your Choice:: 2

Enter the Data: 54

Successfully Inserted..

                        MENU.
1. Initialize.
2. Insert.
3. Delete.
4. Display.
5. Exit.
        Enter your Choice:: 2

Enter the Data: 6

Successfully Inserted..

                        MENU.
1. Initialize.
2. Insert.
3. Delete.
4. Display.
5. Exit.
        Enter your Choice:: 2

Enter the Data: 54

Successfully Inserted..

                        MENU.
1. Initialize.
2. Insert.
3. Delete.
4. Display.
5. Exit.
        Enter your Choice:: 2

Enter the Data: 54

Queue is Full..

                        MENU.
1. Initialize.
2. Insert.
3. Delete.
4. Display.
5. Exit.
        Enter your Choice:: 4

Queue Content:
Front = 0       Rear = 4
43
6
54
6
54

                        MENU.
1. Initialize.
2. Insert.
3. Delete.
4. Display.
5. Exit.
        Enter your Choice:: 3

Deleted Element is 43

                        MENU.
1. Initialize.
2. Insert.
3. Delete.
4. Display.
5. Exit.
        Enter your Choice:: 4

Queue Content:
Front = 1       Rear = 4
6
54
6
54

                        MENU.
1. Initialize.
2. Insert.
3. Delete.
4. Display.
5. Exit.
        Enter your Choice:: 5
        */
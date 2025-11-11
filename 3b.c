#define size 10
#include <stdio.h>

struct CircularQueue
{
    int data[size];
    int front;
    int rear;
}CQ;
int isEmpty()
{
    if(CQ.front==-1 && CQ.rear==-1)
        return 1;
    else
        return 0;
}
int isFull()
{
  return (CQ.rear + 1 )% SIZE == CQ.front;
    
}
void enqueue(int info)
{
    if(isFull())
        printf("Queue Overflow\n");
    else
    {
        if(CQ.front==-1)
            CQ.front=0;
        CQ.rear++;
        CQ.data[CQ.rear]=info;
        printf("%d is inserted\n",info);
    }
}
int dequeue()
{
    int info;
    if(isEmpty())
    {
        printf("Queue Underflow\n");
        return -1;
    }
    else
    {
        info=CQ.data[CQ.front];
        if(CQ.front==CQ.rear)
            CQ.front=CQ.rear=-1;
        else
            CQ.front++;
        return info;
    }
}
int main()
{
    int choice,info;
    CQ.front=-1;
    CQ.rear=-1;
    while(1)
    {
        printf("1.Enqueue\n2.Dequeue\n3.IsEmpty\n4.IsFull\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the element to be inserted: ");
                    scanf("%d",&info);
                    enqueue(info);
                    break;
            case 2: info=dequeue();
                    if(info!=-1)
                        printf("%d is deleted\n",info);
                    break;
            case 3: if(isEmpty())
                        printf("Queue is empty\n");
                    else
                        printf("Queue is not empty\n");
                    break;
            case 4: if(isFull())
                        printf("Queue is full\n");
                    else
                        printf("Queue is not full\n");
                    break;
            case 5: return 0;
            default:printf("Invalid choice\n");
        }
    }
    return 0;
}
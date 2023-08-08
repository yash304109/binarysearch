#include<stdio.h>
int item[10];
int front=-1;
int rear=-1;
int max=10;
void enqueue(int);
void dequeue();
void display();
void enqueue(int x)
{
    if(rear==max-1)
    {
        printf("queue is overflow");
    }
    else
    {
        if(front==-1)
        front=0;
        rear++;
        item[rear]=x;
    }

}
void dequeue()
{
    if(front==-1||front==rear+1)
    printf("empty");
    else
    {
        front++;
    }
 }

void display()
{
     if(front==-1||front==rear+1)
    printf("empty");
    else
    {
        int i;
        for( i=front;i<=rear;i++)
        {
            printf("%d\n",item[i]);
            
        }
    }

}
int main()
{
    dequeue();
    enqueue(30);
    enqueue(31);
    enqueue(32);
    enqueue(33);
    enqueue(34);
    enqueue(35);
    dequeue();
    dequeue();
    display();
    return 0;
}

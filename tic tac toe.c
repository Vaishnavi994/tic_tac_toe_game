#include<stdio.h>
#include<stdlib.h>
# define MAX 100
int rear=0,front=0,item;
int Q[100];
void enqueue()
{
  if(rear==MAX)
  {
    printf("Over flow.\n");
  }
  else
  {
    printf("Enter data:");
    scanf("%d",&item);
    Q[rear]=item;
    rear++;
  }
}
void dequeue()
{
 front=0;
 if(front==rear)
 {
    printf("Under flow.\n");
 }
 else
 {
    item=Q[front];
    printf("Deleted element is %d",item);
    front++;
 }
}
void queuefront()
{
 front=0;
 int i;
 if(front==rear)
 {
    printf("Under flow.\n");
 }
 else
 {
    for(i=0;i<front;i++)
    {
        printf("%d",Q[i]);
    }
 }
}
void main()
{
    int ch;
    printf("Queue Operations.\n");
    printf("1.Enqueue.\n,2. Dequeue,\n,3.Queue front.\n,4.Exit.\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    while(1)
    {
        switch(ch)
        {
            case 1:enqueue();
                    break;
            case 2:dequeue();
                   break;
            case 3:queuefront();
                   break;
            case 4:exit(1);
                   break;
            default:printf("Invalid Choice.\n");
        }
    }
}
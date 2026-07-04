#include<stdio.h>
#define SIZE 10
int queue[SIZE];
int front=-1;
int rear=-1;
void enqueue(int value){
  if(front==-1&&rear==-1){
    front=0;
    rear=0;
    queue[rear]=value;
  }
  else if((rear+1)%SIZE==front){
    printf("Queue is full!\n");
  }
  else {
    rear=(rear+1)%SIZE;
    queue[rear]=value;
  }}
  void dequeue(){
    if(front==-1&&rear==-1)
      printf("queue is empty!");

    else if(front==rear){

      printf("Dequeued element is %d\n",queue[front]);
      front=rear=-1;

    }
    else {
printf("dequeued element is %d\n",queue[front]);
front=(front+1)%SIZE;    }
  }
  void display(){
    int i=front;
    if(front==-1&&rear==-1){
      printf("queue is empty");
    }
    else{
      printf("elements in the queue: \n");
      while( i!=rear){
        printf("%d ",queue[i]);
        i=(i+1)%SIZE;
      }
      printf("%d",queue[rear]);
    }}
    void peek(){
      if(front==-1&&rear==-1){
        printf("queue is empty");
      }
      else 
      printf("peek element is %d",queue[front]);
    }
  int main(){
int  choice,value;
  do{
    printf("\n enter choice\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:
            printf("enter value:\n");
            scanf("%d",&value);
            enqueue(value);
            break;
      case 2:
        dequeue();
        break;
      case 3:
        peek();
        break;
      case 4:
        display();
        break;
       case 5:
        printf("Program ended!");
        return 0;
      default:
        printf("Invalid choice.");

    }

  }while(choice!=5);
  return 0;
}
  

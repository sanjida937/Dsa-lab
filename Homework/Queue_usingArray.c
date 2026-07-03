#include<stdio.h>
#define SIZE 10
int queue[SIZE];
int front =-1;
int tail=-1;
void enqueue(int value){
  if(tail==SIZE-1)
  printf("Queue is full!");
  else if(front==-1&&tail==-1) {
  front=tail=0;
  queue[tail]=value;
  }
  else {
    tail++;
    queue[tail]=value;
  }

}
void dequeue(){
  if(front==-1&&tail==-1)
    printf("underflow!");
    else if(front==tail){
        printf("Dequeued element is %d", queue[front]);
      front=tail=-1;
    }
    else {
      printf("Dequeued element is %d",queue[front]);
      front++;

    }
  }
  void display(){
    int i;
    if(front==-1&&tail==-1){
      printf("queue is empty!");
    }
    else {
      for(i=front;i<tail+1;i++){
        printf("%d ",queue[i]);
      }
    }
  }
  void peek(){
    if(front==-1&&tail==-1){
      printf("queue is empty!");
    }
    else {
      printf(" peek value is %d",queue[front]);
    }
    
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

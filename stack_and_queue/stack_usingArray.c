#include<stdio.h>
#define SIZE 100
int stack[SIZE];
int top=-1;
void push(int value){
  if(top==SIZE-1){
    printf("stack overflow!\n");
  }
  else{
    top++;
    stack[top]=value;
  }
  
}
void pop(){
  int item;
  if(top==-1){
    printf("stack is empty!\n");
  }
  else 
   item=stack[top];
  top--;
  printf("popped item is %d",item);
}
void peek(){
  if(top==-1){
    printf("stack is empty!");
  }
  else 
  printf("peek element is %d",stack[top]);
}
void display(){
  int i;
  for(i=top;i>=0;i--){
    printf("%d ",stack[i]);
  }
}
int main(){
  int choice,value;
  do{
    printf("\n enter choice\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:
            printf("enter value:\n");
            scanf("%d",&value);
            push(value);
            break;
      case 2:
        pop();
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

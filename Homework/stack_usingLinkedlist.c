#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*next;
};
struct node *top=NULL;
void push(int value){
  struct node*newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=value;
  newnode->next=top;
  top=newnode;
}
void display(){
  struct node*temp;
  temp=top;
  if(top==NULL){
    printf("list is empty");
  }
  else {
    while(temp!=0){
      printf("%d ",temp->data);
      temp=temp->next;
    }
  }
}
void peek(){
  if(top==NULL){
   printf("list is empty");
  }
  else 
   printf("top element is %d",top->data);
}
void pop(){
  struct node *temp;
  temp=top;
  if(top==NULL){
    printf("underflow!");
  }
  else{
    printf("popped element is %d",top->data);
    top=top->next;
    free(temp);
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

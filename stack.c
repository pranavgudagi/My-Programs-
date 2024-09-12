
#include <stdio.h>
#include<stdbool.h>
#define max 4
int stack_arr[max]; //global declaration of array 
int top = -1;  //global declaration of top variable and -1 represents stack is empty

void push(int data){
    if(top==max-1){
        printf("stack overflow...");
        return;
    }
    top=top+1;
    stack_arr[top]=data;
    
}
int pop(){
    int value;
    if(top==-1){
        printf("stack is empty...");
    }
    value=stack_arr[top];
    top=top-1;
    return value;
}
int isfull(){
    if(stack_arr[top]==max-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void print(){
    if(top==-1){
        printf("stack is empty");
        return;
    }
    for(int i=top;i>=0;i--){
        printf("%d",stack_arr[i]);
    printf("\n");
    }
    
}
int main() {
    int choice,data;
    while(1){
        printf("\n");
        printf("1. push\n");
        printf("2. pop\n");
        // printf("3. print the top element\n");
        printf("3. print all the elements\n");
        printf("4. Quit\n");
        printf("enter the choice: ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("entered the element to be pushed\n");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                data=pop();
                printf("deletd element is :%d\n",data);
                break;
            case 3:
                print();
                break;
            case 4:
                break;
            default:
                printf("wrong choice");
        }
        
    }

    return 0;
}
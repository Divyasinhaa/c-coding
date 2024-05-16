#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}
void push(struct stack*ptr,int value){
    if(isfull(ptr)){
        printf("Stack overflow\n");
    }
    else{
      ptr->top++;
      ptr->arr[ptr->top]=value; 
    }
}
int pop(struct stack*ptr){
    if(isempty(ptr)){
        printf("stack underflow\n");
        return -1;
    }
    int value=ptr->arr[ptr->top];
    ptr->top--;
    return value;
}
int main(){
    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=5;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    push(sp,4);
    push(sp,3);
    push(sp,2);
    push(sp,1);
    push(sp,12);
    printf("the %d element form the stack is popped",pop(sp));
    
    
}
int main(){
    int a;
    int b;
    int c;
    c=a+b;
    
}

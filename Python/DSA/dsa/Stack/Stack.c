#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size ;
    int top;
    int *arr;
};
int IsFull(struct stack *ptr ){
    if (ptr -> top == ptr-> size-1){
        return 1;

    }else{
        return 0;
    }
}
    int IsEmpty(struct stack *ptr){
        if (ptr-> top == -1 ){
            return 1;
        }else {
            return 0;
        }
    
    }

    void push (struct stack *ptr , int value){

        if (IsFull(ptr))
    {
        printf("Stack is overflow");
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=value;

    }
    
    }
    int pop (struct stack *ptr ){
        if (IsEmpty(ptr)){
            printf("Stack is underflow");
            return -1;
        }else{
            int val = ptr->arr[ptr->top];
            ptr->top--; 
            return val;
        }
    }
    
    int peek(struct stack *ptr,int i){
        int condition =ptr->top-i+1;
        if (condition<0)
        {
           printf("Not a valid index");
           return -1;
        }else{
        return ptr->arr[condition];
        }
        
    }
int main(){

   struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s-> size =80;
    s-> top= -1;
    s-> arr = (int*)malloc(s->size * sizeof(int));
    
   push(s,10);
   push(s,11);
   push(s,12);
   push(s,13);
   push(s,14);
   push(s,15);
   push(s,16);

   printf("Checking the  stack is empty :%d\n ",IsEmpty(s));
    
   printf("Checking the  stack is full :%d \n",IsFull(s));

   printf("Pop from %d element from stack\n",pop(s));
    

   for (int j = 0; j <= s->top+1    ; j++)
   {
    printf("Element at %d index id %d\n",j,peek(s,j));
   }
   
    return 0;
}
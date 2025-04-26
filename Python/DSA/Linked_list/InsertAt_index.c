#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
void terverse(struct node *ptr){
    while(ptr != NULL){
        printf("Your element is : %d\n ", ptr -> data);
        ptr = ptr-> next;
    }
}
struct node *InserAtIndex(struct node * head ,int data, int index){
    struct node *ptr =(struct node*)malloc (sizeof(struct node));
    struct node *p= head;
    int i =0;
    while (i !=index -1)
    {
    p = p->next;
    i++;
    }
    ptr -> data = data;
    ptr -> next = p-> next;
    p-> next = ptr;
    return head;
}
int main (){
 
    struct node *head;
    struct node *P1;
    struct node *P2;
    struct node *P3;
    struct node *P4;

    head = (struct node*)malloc (sizeof (struct node));
    P1 = (struct node*)malloc (sizeof (struct node));
    P2 = (struct node*)malloc (sizeof (struct node));
    P3 = (struct node*)malloc (sizeof (struct node));
    P4 = (struct node*)malloc (sizeof (struct node));

    head -> data=10;
    head -> next=P1;

    P1 -> data=11;
    P1 -> next=P2;

    P2 -> data=13;
    P2 -> next=P3;

    P3 -> data=14;
    P3 -> next=P4;

    P4 -> data=15;
    P4 -> next=NULL;

head = InserAtIndex(head,36565,3);
terverse(head);

    return 0;
}
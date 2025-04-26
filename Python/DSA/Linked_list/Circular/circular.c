#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
void Tarverse(struct node *head){
    struct node *ptr =head;
    do {
        printf("DATA IS : %d \n",ptr->data);
        ptr=ptr->next;
    }while(ptr->next != head);
    printf("DATA IS : %d\n",ptr->data);
}
int main(){
struct node *head;
struct node *P1;
struct node *P2;
struct node *P3;
struct node *P4;

head = (struct node*)malloc(sizeof ( struct node));
P1 = (struct node*)malloc(sizeof ( struct node));
P2 = (struct node*)malloc(sizeof ( struct node));
P3 = (struct node*)malloc(sizeof ( struct node));
P4 = (struct node*)malloc(sizeof ( struct node));

head->data=10;
head-> next= P1;

P1->data=11;
P1-> next= P2;

P2->data=12;
P2-> next= P3;

P3->data=13;
P3-> next= P4;

P4->data=14;
P4-> next= head;

Tarverse(head);
    return 0;
}
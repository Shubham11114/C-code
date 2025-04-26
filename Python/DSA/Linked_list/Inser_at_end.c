#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next;
};

   struct node *insertAtEnd(struct node *head , int data ){
    struct node *ptr = (struct node* ) malloc (sizeof(struct node));
    ptr -> next=NULL;
    ptr -> data =data;
    return ptr;
   }
   void Terverse(  struct node *ptr){
    while (ptr != NULL){
     printf("Your ELement is : %d \n",ptr->data);
     ptr=ptr->next;
    }
}
int main () {
int number;
struct node *head;
struct node *P1;
struct node *P2;
struct node *P3;
struct node *P4;
struct node *p5;
head = (struct node* )malloc(sizeof(struct node));
P1 = (struct node* )malloc(sizeof(struct node));
P2 = (struct node* )malloc(sizeof(struct node));
P3 = (struct node* )malloc(sizeof(struct node));
P4 = (struct node* )malloc(sizeof(struct node));
p5 = (struct node* )malloc(sizeof(struct node));

printf("Enter the first element: \n");
scanf("%d",&head->data );
head->next=P1;

printf("Enter the Second element: \n");
scanf("%d",&P1->data );
P1->next=P2;

printf("Enter the Third element: \n");
scanf("%d",&P2->data );
P2->next=P3;

printf("Enter the Fourth element: \n");
scanf("%d",&P3->data );
P3->next=P4;

printf("Enter the Fifth element: \n");
scanf("%d",&P4->data );
printf("Enter the number : \n ");
scanf("%d ",&number);

P4->next= insertAtEnd(P4,number);


Terverse(head);



return 0;
}
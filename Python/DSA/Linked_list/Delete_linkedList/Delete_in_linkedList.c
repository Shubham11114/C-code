#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void Traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is %d \n:", ptr->data);
        ptr = ptr->next;
    }
}
struct node *DeleteAtFirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node *DeleteAtIndex(struct node *head, int index)
{
    struct node *ptr = head;
    struct node *p = ptr->next;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    free(p);

    return head;
}
struct node *DeleteAtLast(struct node *head)
{
    struct node *p = head;
    struct node *q = p->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);

    return head;
}
struct node *Delete_by_value(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = p->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    else
    {
        printf("Element not found in linked List \n");
    }
    return head;
}
int main()
{
    int n, n1, n2;
    struct node *head;
    struct node *P1;
    struct node *P2;
    struct node *P3;
    struct node *P4;
    struct node *P5;

    head = (struct node *)malloc(sizeof(struct node));

    P1 = (struct node *)malloc(sizeof(struct node));

    P2 = (struct node *)malloc(sizeof(struct node));

    P3 = (struct node *)malloc(sizeof(struct node));

    P4 = (struct node *)malloc(sizeof(struct node));

    P5 = (struct node *)malloc(sizeof(struct node));

    printf("Enter the first element: \n");
    scanf("%d", &head->data);
    head->next = P1;

    printf("Enter the Second element: \n");
    scanf("%d", &P1->data);
    P1->next = P2;

    printf("Enter the Third element: \n");
    scanf("%d", &P2->data);
    P2->next = P3;

    printf("Enter the Fourth element: \n");
    scanf("%d", &P3->data);
    P3->next = P4;

    printf("Enter the Fifth element: \n");
    scanf("%d", &P4->data);
    P4->next = P5;

    printf("Enter the Sixth element: \n");
    scanf("%d", &P5->data);
    P5->next = NULL;

    printf("Your elements are : \n ");
    Traverse(head);

    printf("Enter '1' for Delete first node \n");
    printf("Enter '2'  for Delete specific index\n");
    printf("Enter '3' for Delete last node \n");
    printf("Enter '4'  for Delete specific Element\n");
    scanf("%d", &n);

    if (n == 1)
    {
        head = DeleteAtFirst(head);
        printf("Deleting the first node :\n");
        Traverse(head);
    }
    else if (n == 2)
    {
        printf("Enter the index you want to delete: \n");
        scanf("%d", &n2);
        printf("Deleting the %d index \n", n2);
        head = DeleteAtIndex(head, n2);
        Traverse(head);
    }
    else if (n == 3)
    {
        printf("Deleting the last node :\n");
        head = DeleteAtLast(head);
        Traverse(head);
    }
    else if (n == 4)
    {

        printf("Enter the value : \n");
        scanf("%d", &n1);
        printf("Deleting the %d from the linked List :\n",n1);
        head = Delete_by_value(head, n1);
        Traverse(head);
    }
    else
    {
        printf("Enter the valid number");
    }

    return 0;
}
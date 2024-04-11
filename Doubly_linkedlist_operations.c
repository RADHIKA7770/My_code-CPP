#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head, *tail = NULL;
struct node *start = NULL;

void traverse()
{
    if (start == NULL)
    {
        printf("\nList is empty\n");
        return;
    }
    // Else print the Node's Data
    struct node *temp;
    temp = start;
    while (temp != NULL)
    {
        printf(" --> %d", temp->data);
        temp = temp->next;
    }
}
void sizeof_list()
{
    int size = 0;
    struct node *link;

    if (head == NULL)
    {
        printf("\n Size of list is %d\n", size);
        return;
    }

    link = head;
    while (link != NULL)
    {
        link = link->next;
        size++;
    }

    printf("\n Size of list is %d\n", size);
}

void insertAtFront()
{
    int data;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    temp->data = data;
    temp->prev = NULL;

    temp->next = start;
    start = temp;
    traverse();
}

void insertAtEnd()
{
    int data;
    struct node *temp, *trav;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    temp->data = data;
    temp->next = NULL;
    trav = start;

    if (start == NULL)
    {

        start = temp;
    }

    else
    {
        while (trav->next != NULL)
            trav = trav->next;
        temp->prev = trav;
        trav->next = temp;
    }
    traverse();
}

void insertAtPosition()
{
    int data, pos, i = 1;
    struct node *temp, *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->prev = NULL;

    // Enter the position and data
    printf("\nEnter position : ");
    scanf("%d", &pos);
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    newnode->data = data;
    temp = start;

    if (start == NULL)
    {
        start = newnode;
        newnode->prev = NULL;
        newnode->next = NULL;
    }

    else if (pos == 1)
    {
        newnode->next = start;
        newnode->next->prev = newnode;
        newnode->prev = NULL;
        start = newnode;
    }

    else
    {
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        temp->next->prev = newnode;
    }
    traverse();
}
void reverse()
{
    struct node *current = head, *temp = NULL;

    while (current != NULL)
    {
        temp = current->next;
        current->next = current->prev;
        current->prev = temp;
        current = current->prev;
    }
    temp = head;
    head = tail;
    tail = temp;
}
void deleteFirst()
{
    struct node *temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else
    {
        temp = start;
        start = start->next;
        if (start != NULL)
            start->prev = NULL;
        free(temp);
    }
    traverse();
}

void deleteEnd()
{
    struct node *temp;
    if (start == NULL)
        printf("\nList is empty\n");
    temp = start;
    while (temp->next != NULL)
        temp = temp->next;
    if (start->next == NULL)
        start = NULL;
    else
    {
        temp->prev->next = NULL;
        free(temp);
    }
    traverse();
}

void deletePosition()
{
    int pos, i = 1;
    struct node *temp, *position;
    temp = start;

    if (start == NULL)
        printf("\nList is empty\n");

    else
    {

        printf("\nEnter position : ");
        scanf("%d", &pos);

        if (pos == 1)
        {
            position = start;
            start = start->next;
            if (start != NULL)
            {
                start->prev = NULL;
            }
            free(position);
            return;
        }

        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        position = temp->next;
        if (position->next != NULL)
            position->next->prev = temp;
        temp->next = position->next;

        // Free memory
        free(position);
    }
    traverse();
}

int main()
{
    int choice;
    while (1)
    {

        printf("\n\t1 To see list\n");
        printf("\t2 For insertion at"
               " starting\n");
        printf("\t3 For insertion at"
               " end\n");
        printf("\t4 For insertion at "
               "any position\n");
        printf("\t5 For deletion of "
               "first element\n");
        printf("\t6 For deletion of "
               "last element\n");
        printf("\t7 For deletion of "
               "element at any position\n");
        printf("\t8 For Reversing the linkedlist\n");
        printf("\t9 To print size\n");
        printf("\t10 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            traverse();
            break;
        case 2:
            insertAtFront();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertAtPosition();
            break;
        case 5:
            deleteFirst();
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            deletePosition();
            break;
        case 8:
            reverse();
            break;
        case 9:
            sizeof_list();
            break;
        case 10:
            exit(1);
            break;
        default:
            printf("Incorrect Choice. Try Again \n");
            continue;
        }
    }
    return 0;
}

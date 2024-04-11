#include <stdio.h>  
//Represent a node of the doubly linked list  
  
struct node{  
    int data;  
    struct node *previous;  
    struct node *next;  
};      
   
//Represent the head and tail of the doubly linked list  
struct node *head, *tail = NULL;  
   
//addNode() will add a node to the list  
void addNode(int data) {  
    //Create a new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
      
    //If list is empty  
    if(head == NULL) {  
        //Both head and tail will point to newNode  
        head = tail = newNode;  
        //head's previous will point to NULL  
        head->previous = NULL;  
        //tail's next will point to NULL, as it is the last node of the list  
        tail->next = NULL;  
    }  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        tail->next = newNode;  
        //newNode's previous will point to tail  
        newNode->previous = tail;  
        //newNode will become new tail  
        tail = newNode;  
        //As it is last node, tail's next will point to NULL  
        tail->next = NULL;  
    }  
}  
   
//reverse() will reverse the doubly linked list  
void reverse() {  
    //Node current will point to head  
    struct node *current = head, *temp = NULL;  
      
    //Swap the previous and next pointers of each node to reverse the direction of the list  
    while(current != NULL) {  
        temp = current->next;  
        current->next = current->previous;  
        current->previous = temp;  
        current = current->previous;  
    }  
    //Swap the head and tail pointers.  
    temp = head;  
    head = tail;  
    tail = temp;  
}  
   
//display() will print out the nodes of the list  
void display() {  
    //Node current will point to head  
    struct node *current = head;  
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    while(current != NULL) {  
        //Prints each node by incrementing pointer.  
        printf("%d ", current->data);  
        current = current->next;  
    }  
}  
   
int main()  
{  
    //Add nodes to the list  
    addNode(1);  
    addNode(2);  
    addNode(3);  
    addNode(4);  
    addNode(5);  
      
    printf("Original List: \n");  
    display();  
      
    //Reverse the given list  
    reverse();  
      
    //Displays the reversed list  
    printf("\nReversed List: \n");  
    display();  
   
    return 0;  
}  
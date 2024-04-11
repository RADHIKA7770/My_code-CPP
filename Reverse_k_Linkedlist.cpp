#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *kReverse(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    // Reverse k nodes
    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        head->next = kReverse(next, k);
    }
    return prev;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAthead(head, 15);
    print(head);
    insertAthead(head, 17);
    print(head);
    insertAthead(head, 18);
    print(head);
    insertAttail(tail, 20);
    print(head);
    insertAttail(tail, 22);
    print(head);
    insertAttail(tail, 24);
    print(head);
    insertAtposition(head, tail, 3, 19);
    print(head);
    deleteNode(3, head);
    print(head);
    kReverse()
}
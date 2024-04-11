#include <iostream>
#include <cstdlib>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL;
class linkedlist
{
public:
    node *create(int num)
    {
        node *newNode = new node;
        newNode->data = num;
        newNode->next = NULL;
        return newNode;
    }
    void insert_head(int num)
    {
        cout << "Enter the number to be inserted at head : ";
        cin >> num;
        node *newNode = create(num);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void insert_tail(int num)
    {
        cout << "Enter the number to be inserted at tail : ";
        cin >> num;
        node *newNode = create(num);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            node *current;
            current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    void insert_position(int num, int val)
    {
        cout << "Enter the position : ";
        cin >> val;
        cout << "Enter the number to be inserted at position : ";
        cin >> num;
        node *newNode = create(num);
        node *current = head;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            while (current != NULL)
            {
                if (current->data == val)
                {
                    break;
                }
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }
    void print()
    {
        cout << "-------------------------" << endl;
        node *current = head;
        while (current != NULL)
        {
            cout << current->data << "->";
            current = current->next;
        }
        cout << "NULL" << endl;
        cout << "-------------------------" << endl;
    }
    int count()
    {
        int count = 0;
        node *current = head;
        while (current != NULL)
        {
            count++;
            current = current->next;
        }
        return count;
    }
    int recurcount(node *h)
    {
        static int c;
        if (h == NULL)
        {
            return c;
        }
        c++;
        h = h->next;
        recurcount(h);
    }
    void deletefromhead()
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete (temp);
    }
    void deletefromtail()
    {
        cout << "Deleting at tail";
        node *current = head;
        while (current->next->next != NULL)
        {
            current = current->next;
        }
        current->next = NULL;
        delete (current);
    }
    void deletefrommiddle()
    {
        cout << "Deleting at middle";
        node *one = head;
        node *two = head;
        node *prev = head;
        node *end;
        while (two->next != NULL)
        {
            prev = one;
            one = one->next;
            end = one->next;
            two = two->next->next;
        }
        prev->next = end;
        one->next = NULL;
        // cout <<"test:"<< prev->data << endl;
        // cout <<"test:"<< one->data << endl;
        // cout <<"test:"<< end->data << endl;
    }
    void deletefromval(int val)
    {
        cout << "Enter the value to be deleted : ";
        if (head->data == val)
        {
            deletefromhead();
        }
        else
        {
            node *current = head;
            node *prev;
            while (current != NULL)
            {
                if (current->data == val)
                {
                    break;
                }
                prev = current;
                current = current->next;
            }
            // cout <<"test:"<< prev->data << endl;
            // cout <<"test:"<< current->data << endl;
            prev->next = current->next;
        }
    }
};
int main()
{
    int a;
    while (1)
    {
        cout << "Enter the choice" << endl;
        cout << "0. STOP" << endl;
        cout << "1. insert at head" << endl;
        cout << "2. insert at tail" << endl;
        cout << "3. insert at position" << endl;
        cout << "4. print the list" << endl;
        cout << "5. print the size of linked list" << endl;
        cout << "6. delete from head" << endl;
        cout << "7. delete from tail" << endl;
        cout << "8. delete from middle" << endl;
        cout << "9. delete from using value" << endl;
        cin >> a;
        switch (a)
        {
        case 0:
            cout << "stopped" << endl;
            exit(0);
        case 1:
            linkedlist obj;
            obj.insert_head(3);

            break;
        case 2:
            obj.insert_tail(10);
            break;
        case 3:
            obj.insert_position(99, 10);
            break;
        case 4:
            obj.print();
            break;
        case 5:
            cout << "SIZE:" << obj.recurcount(head) << endl;
        case 6:
            obj.deletefromhead();
            break;
        case 7:
            obj.deletefromtail();
            break;
        case 8:
            obj.deletefrommiddle();
            break;
        case 9:
            int val;
            cout << "Enter the value" << endl;
            cin >> val;
            obj.deletefromval(val);
            break;
        }
    }
}
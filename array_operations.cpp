#include <iostream>
using namespace std;
int n;
int a[10];
int val, i, pos;
void display();
void insert();
void del();
void Reverse();
void size();
int main()
{
    int choice;

    // Creating an array

    cout << "\nEnter the size of the array elements:\t";
    cin >> n;
    cout << "\nEnter the elements for the array:\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    do
    {
        cout << "\n\n--------Menu-----------\n";
        cout << "1.Insert\n";
        cout << "2.Delete\n";
        cout << "3.Display\n";
        cout << "4.Reverse\n";
        cout << "5.Size\n";
        cout << "6.Exit\n";
        cout << "-----------------------";
        cout << "\nEnter your choice:\t";
        cin >> choice;
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            Reverse();
            break;
        case 5:
            size();
            break;
        case 6:
            break;
        default:
            cout << "\nInvalid choice:\n";
        }
    } while (choice != 5);
    return 0;
}
// Inserting elements

void insert()
{
    cout << "\nEnter the position for the new element:\t";
    cin >> pos;
    cout << "\nEnter the element to be inserted :\t";
    cin >> val;
    for (i = n; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = val;
    n = n + 1;
    display();
}

// Deleting an element in an array

void del()
{
    cout << "\n Enter the position of the element to be deleted:\t";
    cin >> pos;
    val = a[pos];
    for (i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;
    cout << "\nThe deleted element is = " << val;
    display();
}

// Displaying the elements

void display()
{
    int i;
    cout << "\nThe array elements are:\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// Reversing The elements
void Reverse()
{
    for (int i = n - 1; i >= 0; i--)
        cout << a[i] << " ";
}

// Size of an array

void size()
{
    int size;
    size = sizeof(a) / sizeof(a[0]);
    cout << "The size of the array is : \n"
         << size;
}
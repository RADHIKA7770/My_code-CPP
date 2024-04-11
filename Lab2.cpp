#include <iostream>
using namespace std;

// Function to display all the menu in the current program
void menu()
{
    cout << "\n\tMENU :";
    cout << "\nPress 1 to print elements\n";
    cout << "Press 2 to reverse the array \n";
    cout << "Press 3 to exit\n";
}

// Function to print the elements in the array arr[]
void print(int arr[], int len)
{
    cout << "Even numbers in the array are - ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }
}

// Function to print array in reverse order
void Reverse(int arr[], int len)
{
    cout << "\nArray in reverse order:\n ";
    for (int i = len - 1; i >= 0; i--)
    {
        cout << arr[i] << "\t";
    }
}
int main()
{
    int arr[10], i, num, choice, pos, val;
    cout << "Enter the size of an array :\n";

    cin >> num;
    cout << "Enter the elements of the array :\n";

    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n";
        menu();
        cout << "\nEnter your choice:\n ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            print(arr, num);
            break;
        case 2:
            Reverse(arr, num);
            break;
        case 3:
            void insert();
            break;
        case 4:
            void del();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "INVALID CHOICE :-(";
        }

    } while (choice != 5);

    return 0;
}

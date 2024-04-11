#include <iostream>
using namespace std;
int e;
int a[100];

void inarray(int *a, int &e)
{
    for (int i = 0; i < e; i++)
    {
        cin >> a[i];
    }
}
void disarray(int *a, int &e)
{
    for (int i = 0; i < e; i++)
    {
        cout << a[i] << " ";
    }
}
void insort(int *a, int &e)
{
    int i, key, j;
    for (i = 0; i < e; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    for (int i = 0; i < e; i++)
    {
        cout << a[i] << " ";
    }
}
void srsort(int *a, int &e)
{
    int i, j, imin;
    for (i = 0; i < e - 1; i++)
    {
        imin = i;
        for (j = i + 1; j < e; j++)
        {
            if (a[j] < a[imin])
            {
                imin = j;
                int tmp = a[i];
                a[i] = a[imin];
                a[imin] = tmp;
            }
        }
    }
    for (int i = 0; i < e; i++)
    {
        cout << a[i] << " ";
    }
}
void bubsort(int *a, int &e)
{
    int i, j;
    for (i = 0; i < e - 1; i++)
    {
        for (j = 0; j < e - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < e; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    char c;
    do
    {
        cout << "1. enter new array" << endl;
        cout << "2. DISPLAY ELEMENTS" << endl;
        cout << "3. Sort the array using ins sort" << endl;
        cout << "4. Sort the array using sel sort" << endl;
        cout << "5. Sort the array using bub sort" << endl;
        cout << "6. exit" << endl;
        cin >> n;

        switch (n)
        {
        case 1:

            cout << "Enter the no of elements" << endl;
            cin >> e;
            inarray(a, e);
            break;

        case 2:

            disarray(a, e);
            break;

        case 3:

            insort(a, e);
            break;

        case 4:

            srsort(a, e);
            break;

        case 5:

            bubsort(a, e);
            break;

        default:
            break;
        }
        cout << " Do you want to continue(Y/N)" << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');

    return 0;
}
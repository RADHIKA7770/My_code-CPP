#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == n)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        else if (i <= n / 2)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else if (i == n / 2 + 1)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == n)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        else
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }

        cout << "    ";
        if (i == 1)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == n)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        else if (i <= n / 2)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else if (i == n / 2 + 1)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == n)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        else
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << "  ";
        if (i == 1)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        else if (i <= n / 2)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else if (i == n / 2 + 1)
        {
            for (j = 1; j <= n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << "  ";
        if (i == 1)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == n)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        else if (i < n)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else
        {
            for (j = 1; j <= n; j++)
            {
                if (j == n)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        cout << "  ";
        if (i <= n / 2)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else if (i == n / 2 + 1)
        {
            for (j = 1; j <= n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << "    *    ";
        cout << "*";
        if (i <= n / 2 + 1)
        {
            for (j = 1; j <= n / 2 + 1 - i; j++)
            {
                cout << " ";
            }
            cout << "*";
            for (j = 1; j < i; j++)
            {
                cout << " ";
            }
        }
        else
        {
            for (j; j <= n - n / 2 + i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
            for (j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
        }
        cout << "  ";
        if (i == 1)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        else if (i <= n / 2)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else if (i == n / 2 + 1)
        {
            for (j = 1; j <= n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
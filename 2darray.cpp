#include <iostream>
using namespace std;
int main()
{
    int a[100][100], b[100][100], i, j, k, l, n, m;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    }
    cout << a[i][j];
    cin >> m;
    for (k = 0; k < m; k++)
    {
        for (l = 0; l < m; l++)
            cin >> b[k][l];
    }
    cout << b[k][l];
    return 0;
}

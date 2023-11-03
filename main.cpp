#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n, m, k, mesta = 0, row = 0;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    }
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        int p = 0;
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 1)
            {
                mesta = max(mesta, p);
                p = 0;
            }
            else
                p++;
        }
        mesta = max(mesta, p);
        if (mesta >= k)
        {
            row = i + 1;
            break;
        }
    }
    cout << row;
    return 0;
}
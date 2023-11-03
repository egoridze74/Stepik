#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++)
                cout << setw(4) << m * i + j + 1;
        }
        else
            for (int j = m - 1; j >= 0; j--)
                cout << setw(4) << m * i + j + 1;
        cout << '\n';
    }
    return 0;
}
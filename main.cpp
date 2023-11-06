#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m, s = 1;
    cin >> n >> m;
    int matrix[n][m];
    for (int k = 0; k < n + m - 1; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                if (i + j == k)
                    matrix[i][j] = s++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << setw(4) << matrix[i][j];
        cout << "\n";
    }
    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];

    int Up = 0, Down = 0, Left = 0, Right = 0;

    int k = 1, i = 0, j = 0;

    while (k <= n * m) {
        matrix[i][j] = k;
        if (i == Up && j < m - Right - 1)
            ++j;
        else if (j == m - Right - 1 && i < n - Down - 1)
            ++i;
        else if (i == n - Down - 1 && j > Left)
            --j;
        else
            --i;
        if ((i == Up + 1) && (j == Left) && (Left != m - Right - 1)) {
            ++Up;
            ++Down;
            ++Right;
            ++Left;
        }
        ++k;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            cout << setw(4) << matrix[i][j];
        cout << '\n';
    }
}
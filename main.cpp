#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m, s = 1;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 == 0)
                cout << setw(4) << s++;
            else cout << setw(4) << "0";
        }
        cout << "\n";
    }
    return 0;
}
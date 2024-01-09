#include <iostream>
<<<<<<< Updated upstream

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[j][i] << ' ';
        cout << '\n';
=======
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (auto now : a) {

        cout << now << " ";
>>>>>>> Stashed changes
    }
    return 0;
}
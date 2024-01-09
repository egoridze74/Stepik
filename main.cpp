#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int size, n;
    cin >> size;
    cin >> n;
    vector <int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int j = 0;
    for (auto now : a)
    {
        if (now >= size)
        {
            ++j;
            size = now + 3;
        }
    }
    cout << j;
    return 0;
}
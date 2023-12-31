#include <iostream>
#include <set>

using namespace std;

int main() {
    set <int> s1, s2;
    int n, m, u;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.insert(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        s2.insert(x);
        if (s1.find(x) != s1.end() && s2.find(x) != s2.end())
            ++u;
    }
    cout << u << endl;
    return 0;
} 
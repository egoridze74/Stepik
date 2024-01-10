#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct dote
{
    int x;
    int y;
};

bool cmp(dote a, dote b)
{
    return sqrt(pow(a.x, 2) + pow(a.y, 2)) < sqrt(pow(b.x, 2) + pow(b.y, 2));
}

int main() {
    int n;
    cin >> n;
    vector <dote> a(n);
    for (int i = 0; i < n; i++)
    {
        int coord_x, coord_y;
        cin >> coord_x >> coord_y;
        dote struct_temp;
        struct_temp.x = coord_x;
        struct_temp.y = coord_y;
        a[i] = struct_temp;
    }
    sort(a.begin(), a.end(), cmp);
    for (auto now : a)
    {
        cout << now.x << " " << now.y << endl;
    }
    return 0;
}
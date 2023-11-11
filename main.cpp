#include <iostream>
#include <cmath>

using namespace std;

bool IsPointInArea(float x, float y) {
    return (pow(x + 1, 2) + pow(y - 1, 2) <= 4) && (y >= -x && y >= 2 * (x + 1)) ||
    (pow(x + 1, 2) + pow(y - 1, 2) >= 4) && (y <= -x && y <= 2 * (x + 1));
}

int main()
{
    float x, y;
    bool k;
    cin >> x >> y;
    k = IsPointInArea(x, y);
    if (k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
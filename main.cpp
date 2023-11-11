#include <iostream>
#include <cmath>

using namespace std;

bool IsPointInCircle(float x, float y, float xc, float yc, float r) {
    return (pow(x - xc, 2) + pow(y - yc, 2)) <= pow(r, 2);
}

int main()
{
    float x, y, xc, yc, r;
    bool k;
    cin >> x >> y >> xc >> yc >> r;
    k = IsPointInCircle(x, y, xc, yc, r);
    if (k)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
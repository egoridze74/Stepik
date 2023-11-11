#include <iostream>
#include <cmath>

using namespace std;

bool IsPointInSquare(float x, float y) {
    return (abs(x) + abs(y)) <= 1;
}

int main()
{
    float x, y;
    bool k;
    cin >> x >> y;
    k = IsPointInSquare(x, y);
    if (k)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
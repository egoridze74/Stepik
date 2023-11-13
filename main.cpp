#include <iostream>
#include <cmath>

using namespace std;

long double power(double a, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power(a * a, n / 2);
    else
        return a * power(a, n - 1);
}

int main()
{
    double a;
    int n;
    cin >> a >> n;
    cout << power(a, n);
    return 0;
}
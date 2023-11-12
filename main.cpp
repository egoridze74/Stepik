#include <iostream>
#include <cmath>

using namespace std;

float power(long double a, long int n) {
    if (n == 0)
        return 1;
    if (n < 0)
        return 1 / a * power(a, n + 1);
    else
        return a * power(a, n - 1);

}

int main()
{
    long double a;
    long int n;
    cin >> a >> n;
    cout << power(a, n);
    return 0;
}
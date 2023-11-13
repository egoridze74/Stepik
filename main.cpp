#include <iostream>
#include <cmath>

using namespace std;

long int IsPrime(long int n)
{
    double m = n;
    for (long int i = ceil(sqrt(n)); i >= 2; --i)
        if (n % i == 0) {
            m = i;
            break;
        }
    return m == n;
}

int main()
{
    long int n;
    cin >> n;
    if (IsPrime(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
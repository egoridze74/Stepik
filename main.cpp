#include <iostream>
#include <cmath>

using namespace std;

long int MinDivisor(long int n)
{
    double m = n;
    for (long int i = ceil(sqrt(n)); i >= 2; --i)
        if (n % i == 0)
            m = i;
    return m;
}

int main()
{
    long int n;
    cin >> n;
    cout << MinDivisor(n);
    return 0;
}
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int count_sum()
{
    int n;
    cin >> n;
    return (n == 0 ? 0 : n + count_sum());
}

int main()
{
    cout << count_sum();
    return 0;
}
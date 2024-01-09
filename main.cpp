#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct man
{
    int number;
    int score;
};

bool cmp(man a, man b)
{
    if (a.score != b.score)
        return a.score > b.score;
    else
        return a.number < b.number;
}

int main() {
    int n;
    cin >> n;
    vector <man> a(n);
    for (int i = 0; i < n; i++)
    {
        int num, scor;
        cin >> num >> scor;
        man struct_temp;
        struct_temp.number = num;
        struct_temp.score = scor;
        a[i] = struct_temp;
    }
    sort(a.begin(), a.end(), cmp);
    for (auto now : a)
    {
        cout << now.number << " " << now.score << endl;
    }
    return 0;
}
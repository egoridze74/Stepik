#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map <string, string> w;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        w[s1] = s2;
    }
    string task;
    cin >> task;
    for (auto now: w)
    {
        if (task == now.first)
        {
            cout << now.second;
            break;
        }
        else if (task == now.second)
        {
            cout << now.first;
            break;
        }
    }
    return 0;
} 
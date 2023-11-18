#include <iostream>
#include <string>
using namespace std;

int main() {
    int flag = 1;
    string s;
    getline(cin, s);
    int k = s.length();
    for (int i = 0; i <= (k / 2 - 1); i++)
    {
        if (s[i] != s[k - i - 1])
        {
            flag = 0;
            break;
        }
    }
    cout << (flag == 1 ? "yes" : "no");
    return 0;
}
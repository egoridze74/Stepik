#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool check_chislo(string s)
{
    if (s.length() > 0)
    {
        int ch = stoi(s);
        if (s.length() == to_string(ch).length() && ch >= 0 && ch <= 255)
            return true;
    }
    return false;
}


int main() {
    string s, cur = "";
    int t = 0;
    getline(cin, s);
    const int k = s.size();
    for (int i = 0; i <= k; i++)
    {
        char c = s[i];
        if (c == '.' or i == k)
        {
            if (!check_chislo(cur))
            {
                t = 0;
                break;
            }
            ++t;
            cur = "";
        }
        else if (isdigit(c))
            cur += c;
        else
            break;
    }
    if (t == 4)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
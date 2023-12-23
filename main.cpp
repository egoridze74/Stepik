#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, lngst = "", cur = "";
    getline(cin, s);
    const int k = s.size();
    for (int i = 0; i <= k; i++)
    {
        char c = s[i];
        if (c == ' ' or i == k)
        {
            if (cur.size() > lngst.size())
                lngst = cur;
            cur = "";
        }
        else
            cur += c;
    }
    cout << lngst << endl;
    return 0;
}
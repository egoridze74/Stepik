#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    for (int i = 0, j = s.size() - 1; i <= j; i++, j--)
    {
        if(s[i] != s[j])
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}
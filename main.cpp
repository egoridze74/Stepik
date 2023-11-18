#include <iostream>
#include <string>
using namespace std;
int main() {
    int i = 0;
    string s;
    getline(cin, s);
    for (auto c : s)
        if (c == ' ') i++;
    cout << i + 1;
    return 0;
}
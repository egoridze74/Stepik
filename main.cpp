#include <iostream>
#include <map>
#include <string>
#include <set>
#include <vector>

using namespace std;

void token(string &str, set <string> &out)
{
    size_t start = str.find("-");
    string ans = str.substr(start);
    str = str.substr(0, start - 1);
    while (size_t pos = ans.find(",") != ans.size())
    {
        out.insert(ans.substr(0, pos));
        ans = ans.substr(pos);
    }
}

int main()
{
    map <string, set<string>> dict;
    int n;
    cin >> n >> ws;
    for (int i = 0; i < n; i++)
    {
        string stroka, eng_w;
        set <string> lat_ws;
        getline(cin, stroka);
        token(eng_w, lat_ws);
        dict[eng_w] = lat_ws;
    }
    for (auto now : dict) {
        cout << now.first << " - ";
        int count = 1;
        for (auto it: now.second) {
            if (count != now.second.size()) {
                cout << it << ", ";
                count++;
            }

            cout << endl;
        }
    }
    return 0;
}
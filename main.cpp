#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

void token(string &str, set <string> &out)
{
    size_t start = str.find('-');
    string trans = str.substr(start + 2);
    str = str.substr(0, start - 1);
    size_t pos = trans.find(',');
    while (pos != trans.npos)
    {
        out.insert(trans.substr(0, pos));
        trans = trans.substr(pos + 2);
        pos = trans.find(',');
    }
    out.insert(trans);

}

int main()
{
    map <string, set<string>> dict;
    int n;
    cin >> n >> ws;
    for (int i = 0; i < n; i++)
    {
        string eng_w;
        set <string> lat_ws;
        getline(cin, eng_w);
        token(eng_w, lat_ws);
        dict[eng_w] = lat_ws;
    }
    for (auto now : dict) {
        cout << "Set: " << now.first << " - ";
        int count = 0;
        for (auto it: now.second) {
            if (count++ != now.second.size())
            {
                cout << it << ", ";
            }
            cout << endl;
        }
    }
    return 0;
}
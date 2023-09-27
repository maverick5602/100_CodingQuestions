#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    cout << "ENTER A STRING : ";
    cin >> s;
    map<char, int> m; // Map of key value pair
    for (auto i : s)
    {
        m[i]++;
    }
    for (auto i : m)
    {

        if (i.second == 1)
        {
            cout << i.first << " ";
        }
    }
    return 0;
}
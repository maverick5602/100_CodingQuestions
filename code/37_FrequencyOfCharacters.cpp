#include <iostream>
#include <map>

using namespace std;
int main()
{
    cout << "Enter a string :";
    string s;
    cin >> s;
    map<char, int> m; // Create a map
    for (auto it : s) // New way of writing for loop , the data structure to 'it' is dynamically assigned
    {
        m[it]++;
    }

    for (auto i : m)
    {
        cout << i.first << " Occurs : " << i.second << " times" << endl;
    }
    return 0;
}
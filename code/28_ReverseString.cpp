#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string :";
    cin >> s;
    cout << "The reverse of the given string is :";

    for (int i = s.length(); i >= 0; i--)
    {
        cout << s[i];
    }

    return 0;
}